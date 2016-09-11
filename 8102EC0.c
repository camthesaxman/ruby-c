signed int __fastcall sub_8102EC0(int a1)
{
  int v1; // r4@1

  v1 = a1;
  ++*(_WORD *)(a1 + 8);
  *(_WORD *)(2 * *(_WORD *)(a1 + 38) + 0x2000034) = 0;
  *(_WORD *)(2 * *(_WORD *)(a1 + 38) + 0x200002E) = 0;
  if ( !v200000A && (!v2000004 || !v2000006 || !(call_via_r0(*(&gUnknown_083ECB40 + *(_WORD *)(a1 + 38))) << 24)) )
  {
    v2000006 = 0;
    call_via_r0(*(&gUnknown_083ECB4C + *(_WORD *)(v1 + 38)));
  }
  *(_WORD *)(v1 + 10) = *(_WORD *)(2 * *(_WORD *)(v1 + 38) + 0x200002E);
  return 1;
}
