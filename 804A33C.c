int __fastcall sub_804A33C(_BYTE *a1, unsigned __int8 a2, int a3)
{
  _BYTE *v3; // r6@1
  int v4; // r7@1
  unsigned int v5; // r4@2
  int v6; // r5@2
  int v7; // r1@4
  unsigned int *v8; // r2@4
  unsigned int v9; // r4@7
  char *v10; // r1@8
  int v12; // [sp+0h] [bp-24h]@6
  int v13; // [sp+20h] [bp-4h]@13

  v3 = a1;
  v4 = a2;
  a3 = (unsigned __int8)a3;
  if ( *(_BYTE *)(dword_3004824 + 93 + (unsigned __int8)a3 + 6 * a2) )
  {
    StringCopy(a1, &gUnknown_0820C33C);
    StringAppend(v3, &gUnknown_0842C7D6);
  }
  else
  {
    v5 = 0;
    v6 = 25 * a3;
    do
    {
      if ( v4 )
      {
        v7 = v5 + 13;
        v8 = (unsigned int *)&unk_30045C0;
      }
      else
      {
        v7 = v5 + 13;
        v8 = dword_3004360;
      }
      *((_WORD *)&v12 + v5) = GetMonData((int)&v8[v6], v7, 0);
      v5 = (v5 + 1) & 0xFFFF;
    }
    while ( v5 <= 3 );
    StringCopy(v3, &gUnknown_0820C33C);
    v9 = 0;
    do
    {
      v10 = (char *)&v12 + 2 * v9;
      if ( *(_WORD *)v10 )
        StringAppend(v3, &gMoveNames[13 * *(_WORD *)v10]);
      StringAppend(v3, &gUnknown_0842C7CB);
      v9 = (v9 + 1) & 0xFFFF;
    }
    while ( v9 <= 3 );
  }
  return v13;
}
