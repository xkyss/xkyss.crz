
const std = @import("std");

m: i32 = 0,

const Self = @This();

pub fn foo01(self: *Self) !void {
    std.debug.print("{}\n", .{self.m});
}

pub fn foo02(self: *Self) !void {
    self.m += 2;
    std.debug.print("{}\n", .{self.m});
}


test "foo01" {
    std.debug.print("Page test foo01\n", .{});
    var p = Self{};
    try p.foo01();

    try std.testing.expect(p.m == 0);
}

test "foo02" {
    std.debug.print("Page test foo02\n", .{});
    var p = Self{};
    try p.foo02();

    try std.testing.expect(p.m == 2);
}
