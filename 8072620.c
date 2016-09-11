int __fastcall sub_8072620(char a1, char a2, unsigned __int8 a3, int a4, unsigned __int8 a5)
{
  int v5; // r10@1
  int v6; // r8@1
  unsigned int v7; // r4@1
  unsigned int v8; // r1@1
  unsigned int v9; // r5@3
  unsigned int v10; // r4@3
  unsigned int i; // r4@7
  unsigned int j; // r4@9
  unsigned int v13; // r4@11
  int v14; // r7@12
  int v15; // r5@12
  unsigned __int8 v16; // r9@12
  char v18; // [sp+0h] [bp-30h]@1
  char v19; // [sp+4h] [bp-2Ch]@1
  int v20; // [sp+2Ch] [bp-4h]@0

  v5 = a4;
  v18 = a1;
  v19 = a2;
  v6 = a3;
  v7 = 0;
  v8 = (unsigned int)byte_30006B8;
  do
  {
    byte_30006B8[v7] = 0;
    v7 = (v7 + 1) & 0xFF;
  }
  while ( v7 <= 6 );
  v9 = 0;
  v10 = 0;
  if ( a3 > 0u )
  {
    do
    {
      v8 = (unsigned __int8)sub_8072CA4(*(_DWORD *)(8 * v10 + v5), v8) + 7;
      if ( v8 >> 3 > v9 )
        v9 = v8 >> 3;
      v10 = (v10 + 1) & 0xFF;
    }
    while ( v10 < v6 );
  }
  for ( i = 1; i <= a5; i = (i + 1) & 0xFF )
    byte_30006B8[i] = v9;
  for ( j = 1; j <= a5; j = (j + 1) & 0xFF )
    byte_30006B8[j] += 1 + byte_30006B8[j - 1];
  --byte_30006B8[a5];
  v13 = 0;
  if ( a5 > 0u )
  {
    do
    {
      v14 = 0;
      v15 = 0;
      v16 = v13 + 1;
      if ( (signed int)v13 < v6 )
      {
        do
        {
          MenuPrint(*(_DWORD *)(8 * (v13 + v15) + v5), v18 + byte_30006B8[v13 % a5 & 0xFF], v19 + 2 * v14);
          v15 = (v15 + a5) & 0xFF;
          v14 = (v14 + 1) & 0xFF;
        }
        while ( (signed int)(v13 + v15) < v6 );
      }
      v13 = (unsigned __int8)(v13 + 1);
    }
    while ( v16 < (unsigned int)a5 );
  }
  return v20;
}
