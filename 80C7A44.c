int __fastcall sub_80C7A44(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r0@1
  unsigned int v4; // r5@1
  int v5; // r1@1
  unsigned int v6; // r0@3
  unsigned int v7; // r1@4
  int v9; // [sp+8h] [bp-4h]@0

  v2 = a2;
  v3 = a1 << 24;
  v4 = v3 >> 24;
  v5 = (unsigned __int8)sub_80C7A08(BYTE3(v3));
  if ( v2 != 1 )
  {
    v6 = ((v5 + 1) << 24) & 0x3000000;
    goto _080C7A72;
  }
  if ( v5 )
  {
    v6 = (v5 - 1) << 24;
_080C7A72:
    v7 = v6 >> 24;
    goto _080C7A74;
  }
  LOBYTE(v7) = 3;
_080C7A74:
  sub_80C7A24(v4, v7);
  return v9;
}
