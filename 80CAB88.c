int __fastcall sub_80CAB88(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( sub_8078718(a1) << 24 )
  {
    *(_BYTE *)(v1 + 62) |= 4u;
    *(_WORD *)(v1 + 46) = 10;
    *(_DWORD *)(v1 + 28) = sub_80782D8;
    oamt_set_x3A_32(v1, (int)sub_80CABC0);
  }
  return v3;
}
