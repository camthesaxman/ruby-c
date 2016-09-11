int __fastcall sub_811A1C8(int a1, int a2)
{
  unsigned int v2; // r5@1
  char v3; // r4@1
  int v4; // r0@1
  int v5; // r0@1
  unsigned int v6; // r6@1
  int v7; // r7@3
  unsigned int v8; // r8@3
  char v9; // r9@4
  int v10; // r2@4
  _BYTE *v11; // r5@5
  char v12; // r4@5
  char v13; // r9@7
  int v14; // r7@7
  _BYTE *v15; // r5@8
  char v16; // r4@8
  char v18; // [sp+0h] [bp-2Ch]@3
  int v19; // [sp+4h] [bp-28h]@7
  int v20; // [sp+28h] [bp-4h]@0

  v2 = a1 << 24;
  v3 = a1;
  v4 = _floatsidf((unsigned int)((a2 << 24) + 2130706432) >> 16);
  v5 = _divdf3(v4);
  v6 = (unsigned __int8)_fixunsdfsi(v5);
  if ( v6 > 0x37 )
    v6 = 55;
  v18 = v6;
  v7 = v3 & 1;
  v8 = v2 >> 27;
  if ( v6 <= v201C012 )
  {
    v19 = 16 * v7;
    v13 = gUnknown_083FB738[v7];
    v14 = v3 & 7;
    do
    {
      v15 = (_BYTE *)(((32 * v8 + *(&gUnknown_083FB274[72 * v14] + v6)) & 0xFFFF) + 0x2000000);
      v16 = *(_BYTE *)(((32 * v8 + *(&gUnknown_083FB274[72 * v14] + v6)) & 0xFFFF) + 0x2000000) & v13;
      *v15 = v16;
      *v15 = v16 | *(&gUnknown_083FB73A[((v6 / 3 & 0xFF) - 1) & 0xF] + v19);
      v6 = (v6 + 1) & 0xFF;
    }
    while ( v6 < v201C012 );
  }
  else
  {
    v9 = gUnknown_083FB738[v7];
    v10 = v3 & 7;
    do
    {
      v11 = (_BYTE *)(((32 * v8 + *(&gUnknown_083FB274[72 * v10] + v6)) & 0xFFFF) + 0x2000000);
      v12 = *(_BYTE *)(((32 * v8 + *(&gUnknown_083FB274[72 * v10] + v6)) & 0xFFFF) + 0x2000000) & v9;
      *v11 = v12;
      *v11 = v12 | *(&gUnknown_083FB73A[16 * v7] + (((v6 / 3 & 0xFF) - 1) & 0xF));
      v6 = (v6 - 1) & 0xFF;
    }
    while ( v6 > v201C012 );
  }
  v201C012 = v18;
  return v20;
}
