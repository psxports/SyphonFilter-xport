# Syphon Filter

Resolve `[XPORT_ROOT]` from `xport-project.json` and read `[XPORT_ROOT]/AGENTS.md`. Keep only stable game-specific facts and task-routing links here; put detailed evidence under `status`. Never create, edit, move, delete or regenerate `README.md`.

## Project facts

- Native short name: `SF`; language: C
- Solution: `src/platform/win/SF.sln`; Debug executable: `bin/SF_debug.exe`; Release executable: `bin/SF.exe`; working directory: `bin`; intermediates: `_build`
- Runtime data: `bin/DATA`; Red Book output when applicable: `bin/MUSIC`
- Reviewed main image: `SCUS_942.40`; original identity and accepted artifacts: `status/ida/accepted/startup-ida-v1.json`
- Runtime GP: `0x80115C68`, initialized at `0x800E3E20`; overlay inheritance uses accepted initializer evidence with either observed entry registers or a complete byte-bound static loader contract described in `[XPORT_ROOT]/docs/STARTUP.md`
- Reviewed overlay loads: `INIT.OVL` at `0x8014C0A8`, `MOVIE.OVL` at `0x8013D630`, `TITLE.OVL` at `0x80146630`; accepted identities: `status/ida/overlay-accepted-publication.json`; byte evidence: `status/overlay-runtime-match-review.json`
- Reviewed static MENU load: `MENU.OVL` at `0x8013D630`, entry `0x80145ACC`; acceptance: `status/ida/accepted/coverage-menu-main-target-v1.json`; loader/GP evidence: `status/ida/menu-static-gp-contract-review.json`; no runtime MENU observation is claimed
- Guest addresses remain numeric bus addresses; native local output objects use reviewed typed adapters. ABI evidence: `status/function-coverage/first/agent-audit-mainloop-abi.json`
- Missing BIOS/SDK boundaries may abort under the explicit user authorization; this grants no original equivalence. Game functions remain subject to complete audits; unrecorded game dependencies use supervisor-owned link-only stubs
