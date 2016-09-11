int __fastcall sub_80BF820(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3, int a4, unsigned __int16 a5, int a6)
{
  int v6; // r8@1
  int v7; // r5@1
  int v8; // r6@1
  unsigned int v9; // r2@1
  int v10; // r4@4
  int v11; // r2@4
  char *v12; // r0@5
  char *v13; // r1@5
  char *v14; // r1@9
  char *v15; // r0@9
  int v16; // r4@12
  int v17; // r2@12
  int v18; // r4@19
  int v19; // r2@19
  int v20; // r1@20
  int v21; // r0@26
  char v23[28]; // [sp+0h] [bp-1Ch]@2
  int v24; // [sp+18h] [bp-4h]@30

  v6 = a1;
  v7 = a2;
  v8 = a3;
  a4 = (unsigned __int16)a4;
  v9 = 0;
  do
  {
    v23[v9];
    v23[v9] = -1;
    v9 = (v9 + 1) & 0xFF;
  }
  while ( v9 <= 2 );
  if ( a4 )
  {
    if ( a4 != 1 )
    {
      v18 = 11 * a5;
      v19 = (unsigned __int16)StringLength(&gSpeciesNames[v18]);
      if ( v8 )
      {
        if ( v8 != 1 )
        {
          if ( v8 == 2 )
          {
            v14 = v23;
            v23[0] = *(&gSpeciesNames[v7] + v18);
            v21 = v7 + v18 + 1;
          }
          else
          {
            v14 = v23;
            v23[0] = *(&gSpeciesNames[v19 - 2 - v7] + v18);
            v21 = v19 - 1 - v7 + v18;
          }
          v15 = &gSpeciesNames[v21];
          goto _080BF950;
        }
        v12 = v23;
        v20 = v19 - v7 + v18;
      }
      else
      {
        v12 = v23;
        v20 = v7 + v18;
      }
      v13 = &gSpeciesNames[v20];
      goto _080BF920;
    }
    v16 = a6 + 4;
    v17 = (unsigned __int16)StringLength((_BYTE *)(a6 + 4));
    if ( !v8 )
    {
      v12 = v23;
      v13 = (char *)(v16 + v7);
      goto _080BF920;
    }
    if ( v8 == 1 )
    {
      v12 = v23;
      v13 = (char *)(v16 + v17 - v7);
      goto _080BF920;
    }
    if ( v8 == 2 )
    {
      v14 = v23;
      v23[0] = *(_BYTE *)(v16 + v7);
      v15 = (char *)(v16 + v7 + 1);
    }
    else
    {
      v14 = v23;
      v23[0] = *(_BYTE *)(v16 + v17 - 2 - v7);
      v15 = (char *)(v16 + v17 - 1 - v7);
    }
_080BF950:
    v14[1] = *v15;
    goto _080BF954;
  }
  v10 = a6 + 15;
  v11 = (unsigned __int16)StringLength((_BYTE *)(a6 + 15));
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      v12 = v23;
      v13 = (char *)(v10 + v11 - v7);
      goto _080BF920;
    }
    if ( v8 == 2 )
    {
      v14 = v23;
      v23[0] = *(_BYTE *)(v10 + v7);
      v15 = (char *)(v10 + v7 + 1);
    }
    else
    {
      v14 = v23;
      v23[0] = *(_BYTE *)(v10 + v11 - 2 - v7);
      v15 = (char *)(v10 + v11 - 1 - v7);
    }
    goto _080BF950;
  }
  v12 = v23;
  v13 = (char *)(v10 + v7);
_080BF920:
  *v12 = *v13;
_080BF954:
  StringCopy((_BYTE *)gUnknown_083D1464[v6], v23);
  return v24;
}
