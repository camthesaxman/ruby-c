int __fastcall sub_8116D54(unsigned __int8 a1, unsigned __int8 a2)
{
  int result; // r0@2
  int *v3; // r0@3
  unsigned int v4; // r5@3
  int v5; // r0@3
  unsigned int v6; // r3@3
  int v7; // r12@3
  unsigned int v8; // r2@9
  int v9; // r7@9
  int *v10; // r3@10
  signed int v11; // [sp+0h] [bp-38h]@1
  signed int v12; // [sp+4h] [bp-34h]@1
  signed int v13; // [sp+8h] [bp-30h]@1
  signed int v14; // [sp+Ch] [bp-2Ch]@1
  int v15; // [sp+10h] [bp-28h]@1
  signed int v16; // [sp+14h] [bp-24h]@1
  signed int v17; // [sp+18h] [bp-20h]@1

  v11 = 67650;
  v12 = 135300;
  v13 = 270600;
  v14 = 541200;
  v15 = 992;
  v16 = 31744;
  v17 = 1015808;
  if ( a2 <= 0xBu )
  {
    v3 = &dword_3004B20[10 * a1];
    v4 = 8 * a2;
    *(_BYTE *)(*((_WORD *)v3 + 10) + 0x201900B) = *((_BYTE *)&gUnknown_083F8D90 + v4 + 2);
    *((_WORD *)v3 + 16) = *((_BYTE *)&gUnknown_083F8D90 + v4 + 2);
    v5 = gUnknown_083F8D94[v4 / 4];
    v2019008 |= v5;
    v6 = 0;
    v7 = 2 * a2;
    do
    {
      if ( *(&v11 + v6) & v5 )
        ++*(_BYTE *)(v6 + 33656850);
      if ( (unsigned int)*(_BYTE *)(v6 + 33656850) > 2 )
        v2019008 |= *(&v11 + v6);
      v6 = (v6 + 1) & 0xFF;
    }
    while ( v6 <= 3 );
    v8 = 0;
    v9 = gUnknown_083F8D94[v7];
    do
    {
      v10 = &v15 + v8;
      if ( *v10 & v9 )
        ++*(_BYTE *)(v8 + 33656854);
      if ( (unsigned int)*(_BYTE *)(v8 + 33656854) > 3 )
        v2019008 |= *v10;
      v8 = (v8 + 1) & 0xFF;
    }
    while ( v8 <= 2 );
    result = *((_BYTE *)&gUnknown_083F8D90 + v7 * 4 + 2);
  }
  else
  {
    result = 0;
  }
  return result;
}
