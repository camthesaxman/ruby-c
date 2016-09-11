int __fastcall FieldObjectExecSpecialAnim(int a1, int a2)
{
  _BYTE *v2; // r4@1
  int v4; // [sp+4h] [bp-4h]@0

  v2 = (_BYTE *)a1;
  if ( call_via_r2(a1, a2, gUnknown_08375778[*(_BYTE *)(a1 + 28)][*(_WORD *)(a2 + 50)]) << 24 )
    *v2 |= 0x80u;
  return v4;
}
