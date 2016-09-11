int __fastcall sub_80A444C(unsigned __int8 a1, unsigned __int8 a2, int a3, int a4)
{
  unsigned __int8 v4; // r10@1
  int i; // r6@1
  int v6; // r4@2
  int v7; // r7@2
  int v8; // r4@2
  int v9; // r0@2
  int v11; // [sp+0h] [bp-28h]@1
  int v12; // [sp+4h] [bp-24h]@1
  int v13; // [sp+24h] [bp-4h]@0

  v11 = a3;
  v12 = a4;
  v4 = a1;
  for ( i = a2; i <= v11 && (unsigned __int8)sub_80A42B0(i, v12) != 1; i = (i + 1) & 0xFF )
  {
    v6 = (i + (unsigned __int8)byte_3005D10[4 * v2038559 + 1]) & 0xFF;
    v7 = sub_80A425C(v4, (int)&gStringVar1, i);
    v8 = 4 * v6;
    v9 = itemid_get_item(*(_WORD *)(v8 + dword_3005D24));
    sub_8072C74(v7, v9, 0x60u, 0);
    MenuPrint((int)&gStringVar1, 14, (unsigned int)((i << 25) + 0x2000000) >> 24);
    if ( v2038558 )
    {
      if ( *(_WORD *)(v8 + dword_3005D24) == v2025BCA )
        sub_80A4030(i);
    }
    else if ( *(_WORD *)(v8 + dword_3005D24) == v2025BCA )
    {
      sub_80A405C(i);
    }
    else
    {
      sub_80A40AC(i);
    }
  }
  return v13;
}
