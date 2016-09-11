int __fastcall sub_8091304(_BYTE *a1, char a2, unsigned __int8 a3)
{
  char v3; // r12@1
  unsigned __int8 v4; // r7@1
  unsigned int v5; // r4@1
  int v6; // r3@4
  int i; // r0@4
  int j; // r3@8
  unsigned int v9; // r1@9
  char *v10; // r2@9
  int v11; // r1@9
  int v13; // [sp+0h] [bp-34h]@2
  int v14; // [sp+30h] [bp-4h]@10

  v3 = a2;
  v4 = a3;
  v5 = 0;
  if ( *a1 != 255 )
  {
    do
    {
      *((_BYTE *)&v13 + v5) = a1[v5];
      v5 = (v5 + 1) & 0xFF;
    }
    while ( a1[v5] != 255 && v5 <= 0xA );
  }
  v6 = 0;
  for ( i = (unsigned __int8)DexText_UnknownPoke[0]; i == 172 || !i; i = (unsigned __int8)DexText_UnknownPoke[v6] )
    v6 = (v6 + 1) & 0xFF;
  for ( j = (v6 - 1) & 0xFF; (unsigned __int8)DexText_UnknownPoke[j] != 255; *v10 = DexText_UnknownPoke[v11] )
  {
    v9 = v5;
    v5 = (v5 + 1) & 0xFF;
    v10 = (char *)&v13 + v9;
    v11 = j;
    j = (j + 1) & 0xFF;
  }
  *((_BYTE *)&v13 + v5) = -1;
  sub_8072B80((int)&v13, v3, v4, DexText_UnknownPoke);
  return v14;
}
