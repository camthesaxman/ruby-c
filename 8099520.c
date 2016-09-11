int __fastcall sub_8099520(int a1)
{
  _DWORD *v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = (_DWORD *)((4 * a1 & 0x3FF) + 33558584);
  if ( *(_DWORD *)((4 * a1 & 0x3FF) + 0x2001038) )
  {
    sub_8099BE0();
    *v1 = 0;
  }
  return v3;
}
