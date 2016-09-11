int __fastcall sub_80BAE78(signed int a1, unsigned __int16 a2, int a3, unsigned __int8 a4)
{
  signed int v4; // r8@1
  int v5; // r6@1
  int v6; // r5@1
  signed int v7; // r0@2
  signed int v8; // r1@3
  signed int v9; // r10@5
  int v10; // r5@7
  signed int v11; // r0@7
  signed int v12; // r6@9
  int v13; // r0@9
  signed int v14; // r4@11
  signed int v15; // r4@16
  signed int v17; // [sp+0h] [bp-4Ch]@1
  signed int v18; // [sp+4h] [bp-48h]@1
  signed int v19; // [sp+8h] [bp-44h]@1
  signed int v20; // [sp+Ch] [bp-40h]@1
  signed int v21; // [sp+10h] [bp-3Ch]@1
  signed int v22; // [sp+14h] [bp-38h]@1
  char v23[8]; // [sp+18h] [bp-34h]@2
  int v24; // [sp+20h] [bp-2Ch]@8
  int v25; // [sp+24h] [bp-28h]@7
  int v26; // [sp+28h] [bp-24h]@7
  int v27; // [sp+48h] [bp-4h]@17

  v4 = a1;
  v5 = a2;
  a3 = (unsigned __int16)a3;
  v17 = 1;
  v18 = 10;
  v19 = 100;
  v20 = 1000;
  v21 = 10000;
  v22 = 100000;
  LOBYTE(v6) = 0;
  do
  {
    v23[(char)v6] = 0;
    v7 = ((char)v6 + 1) << 24;
    v6 = ((char)v6 + 1) & 0xFF;
  }
  while ( v7 >> 24 <= a4 );
  v23[a4 + 1] = -1;
  v8 = 0;
  if ( v4 < 0 )
  {
    v4 = -v4;
    v8 = 1;
  }
  v9 = 0;
  if ( a4 == 1 )
    v9 = 1;
  v10 = (a4 - 1) & 0xFF;
  v11 = (a4 - 1) << 24;
  v25 = v5 << 24;
  v26 = a3 << 24;
  if ( !((a4 - 1) & 0x80) )
  {
    v24 = v8;
    do
    {
      v12 = v11 >> 24;
      v13 = v4 / *(&v17 + (v11 >> 24)) << 24;
      if ( v13 || v9 || (v14 = v10 << 24, !v12) )
      {
        v14 = v10 << 24;
        if ( v24 && !v9 )
          v23[a4 - (char)v10 - 1] = -82;
        v23[a4 - (char)v10] = BYTE3(v13) - 95;
        v9 = 1;
      }
      v15 = v14 >> 24;
      v4 %= *(&v17 + v15);
      v10 = (v15 - 1) & 0xFF;
      v11 = (v15 - 1) << 24;
    }
    while ( !((v15 - 1) & 0x80) );
  }
  MenuPrint((int)v23, SBYTE3(v25), BYTE3(v26));
  return v27;
}
