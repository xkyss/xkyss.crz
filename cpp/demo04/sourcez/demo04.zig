
const std = @import("std");
const Paper = @import("Paper.zig");


// @see: zig/lib/compiler_rt/stack_probe.zig
export fn __chkstk_ms() callconv(.Naked) void {
    @setRuntimeSafety(false);
    // @call(.always_inline, win_probe_stack_only, .{});
}
export fn ___chkstk_ms() callconv(.Naked) void {
    @setRuntimeSafety(false);
    // @call(.always_inline, win_probe_stack_only, .{});
}


pub const demo04_paper_s = Paper;

export fn demo04_get_version() u32 {
    return 111;
}

export fn demo04_paper_new() *demo04_paper_s {
    const p = std.heap.page_allocator.create(Paper) catch unreachable;
    p.* = Paper{}; // 初始化
    std.debug.print("demo04_paper_new: {}\n", p.*);
    return p;
}

export fn demo04_paper_new_with_int(i: i32) *demo04_paper_s {
    const p = std.heap.page_allocator.create(Paper) catch unreachable;
    p.* = Paper{ .m = i }; // 初始化
    std.debug.print("demo04_paper_new_with_int: {}\n", p.*);
    return p;
}

export fn demo04_paper_delete(paper: *demo04_paper_s) void {
    std.debug.print("demo04_paper_delete: {}\n", paper.*);
    std.heap.page_allocator.destroy(paper);
}

export fn demo04_paper_foo01(paper: *demo04_paper_s) void {
    try paper.foo01();
}

export fn demo04_paper_foo02(paper: *demo04_paper_s) i32 {
    try paper.foo02();
    return paper.m;
}

