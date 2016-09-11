int __fastcall sub_806F7E8(unsigned __int8 a1, int a2, char a3)
{
  int v3; // r5@1
  _BYTE *v4; // r3@1
  int v5; // r1@1
  unsigned int v6; // r0@1
  unsigned int v7; // r2@1
  unsigned int v8; // r3@1
  unsigned __int8 v9; // r0@7

  v3 = a2;
  v4 = &byte_3004B28[40 * a1];
  v5 = *((_WORD *)v4 + 10);
  *(_DWORD *)v3 = v5;
  *(_DWORD *)(v3 + 4) = *((_WORD *)v4 + 11);
  *(_DWORD *)(v3 + 8) = *((_WORD *)v4 + 12) * a3;
  *(_DWORD *)(v3 + 16) = 256;
  v6 = sub_8046200(v201B282, v5) << 24;
  v7 = v6 >> 24;
  v8 = v6 >> 24;
  if ( v6 >> 24 > 2 )
  {
    v6 = 4;
    *(_BYTE *)(v3 + 12) = *(_BYTE *)(v3 + 12) & 0xE0 | 4;
  }
  if ( v7 == 2 )
  {
    v6 = 5;
    *(_BYTE *)(v3 + 12) = *(_BYTE *)(v3 + 12) & 0xE0 | 5;
  }
  if ( v8 <= 1 )
  {
    v6 = 6;
    *(_BYTE *)(v3 + 12) = *(_BYTE *)(v3 + 12) & 0xE0 | 6;
  }
  v9 = battle_type_is_double(v6);
  return (signed __int16)sub_80460C8((int *)v3, 33669132, *(&gUnknown_08376858[6 * v9] + v201C005));
}
