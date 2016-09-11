int __fastcall sub_80DEF3C(int a1)
{
  int v1; // r4@1
  signed __int16 v2; // r2@2
  signed __int16 v3; // r3@2
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_80787B0(a1, 1);
  if ( battle_side_get_owner(v202F7C8) << 24 )
  {
    v2 = -24;
    v3 = 2;
  }
  else
  {
    v2 = 24;
    v3 = -2;
    *(_BYTE *)(v1 + 3) = *(_BYTE *)(v1 + 3) & 0xC1 | 0x10;
  }
  *(_WORD *)(v1 + 32) += v2;
  *(_WORD *)(v1 + 48) = v3;
  *(_WORD *)(v1 + 46) = 60;
  *(_DWORD *)(v1 + 28) = sub_80DEF98;
  return v5;
}
