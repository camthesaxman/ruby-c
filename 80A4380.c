int __fastcall sub_80A4380(unsigned __int8 a1, unsigned __int8 a2, int a3, int a4)
{
  int v4; // r10@1
  unsigned __int8 v5; // r9@1
  int i; // r7@1
  int v7; // r4@2
  int v8; // r6@2
  int v9; // r0@2
  _BYTE *v10; // r0@2
  int v12; // [sp+0h] [bp-24h]@1
  int v13; // [sp+20h] [bp-4h]@0

  v12 = a3;
  v4 = a4;
  v5 = a1;
  for ( i = a2; i <= v12 && (unsigned __int8)sub_80A42B0(i, v4) != 1; i = (i + 1) & 0xFF )
  {
    v7 = (i + (unsigned __int8)byte_3005D10[4 * v2038559 + 1]) & 0xFF;
    v8 = sub_80A425C(v5, (int)&gStringVar1, i);
    v7 *= 4;
    v9 = itemid_get_item(*(_WORD *)(v7 + dword_3005D24));
    v10 = (_BYTE *)sub_8072C74(v8, v9, 0x66u, 0);
    *v10 = -71;
    sub_8072C14((int)(v10 + 1), *(_WORD *)(v7 + dword_3005D24 + 2), 0x78u, 1u);
    MenuPrint((int)&gStringVar1, 14, (unsigned int)((i << 25) + 0x2000000) >> 24);
  }
  return v13;
}
