int __fastcall sub_808D690(char a1, unsigned __int8 a2)
{
  unsigned int v2; // r6@1
  __int16 v3; // r4@10
  __int16 v4; // r10@11
  __int16 v5; // r6@11
  unsigned __int16 v6; // ST04_2@11
  int v7; // r4@11
  char v8; // r0@11
  char v9; // r0@11
  unsigned int v10; // r4@15
  int v11; // r5@15
  signed int v12; // r10@15
  unsigned int v13; // r4@16
  unsigned int v14; // r7@16
  int v15; // r4@19
  char v16; // r0@19
  char v17; // r0@19
  unsigned int v18; // r4@24
  signed int v19; // r4@25
  signed int v20; // r7@25
  int v21; // r2@27
  _WORD *v22; // r3@27
  char v23; // r0@27
  int v24; // r3@27
  unsigned int v25; // r4@30
  signed int v26; // r0@30
  int v27; // r2@33
  _WORD *v28; // r3@33
  int v29; // r2@33
  unsigned int v30; // r4@36
  signed int v31; // r4@37
  signed int v32; // r7@37
  int v33; // r2@39
  _WORD *v34; // r3@39
  int v35; // r2@39
  unsigned int v36; // r4@42
  signed int v37; // r0@42
  int v38; // r2@45
  _WORD *v39; // r3@45
  int v40; // r2@45
  unsigned int v41; // r4@48
  signed int v42; // r4@49
  signed int v43; // r7@49
  int v44; // r2@51
  _WORD *v45; // r3@51
  int v46; // r2@51
  int v47; // r4@53
  signed int v48; // r3@53
  signed int v49; // r3@54
  int v50; // r1@54
  signed __int16 v52; // [sp+0h] [bp-28h]@3
  signed __int16 v53; // [sp+2h] [bp-26h]@3
  unsigned __int16 v54; // [sp+4h] [bp-24h]@16
  unsigned __int16 v55; // [sp+4h] [bp-24h]@25
  unsigned __int16 v56; // [sp+4h] [bp-24h]@31
  unsigned __int16 v57; // [sp+4h] [bp-24h]@37
  unsigned __int16 v58; // [sp+4h] [bp-24h]@43
  unsigned __int16 v59; // [sp+4h] [bp-24h]@49
  int v60; // [sp+24h] [bp-4h]@0

  v2 = a2;
  *(_WORD *)(v202FFB4 + 1548) = 0;
  if ( a1 && a1 == 1 )
  {
    if ( sub_806912C() )
    {
      v52 = 386;
      v53 = 0;
    }
    else
    {
      v52 = 202;
      v53 = 1;
    }
  }
  else
  {
    v52 = 202;
    v53 = 1;
  }
  if ( v2 <= 5 )
  {
    switch ( v2 )
    {
      case 0u:
        if ( v53 )
        {
          v3 = 0;
          if ( (signed int)(unsigned __int16)v52 > 0 )
          {
            do
            {
              v4 = v3 + 1;
              v5 = v3 + 1;
              v6 = HoennToNationalOrder(v3 + 1);
              v7 = 4 * v3;
              *(_WORD *)(v202FFB4 + v7) = v6;
              v8 = sub_8090D90(v6, 0);
              *(_BYTE *)(v202FFB4 + v7 + 2) = *(_BYTE *)(v202FFB4 + v7 + 2) & 0xFE | v8 & 1;
              v9 = sub_8090D90(v6, 1);
              *(_BYTE *)(v202FFB4 + v7 + 2) = *(_BYTE *)(v202FFB4 + v7 + 2) & 0xFD | 2 * (v9 & 1);
              if ( *(_BYTE *)(v202FFB4 + v7 + 2) << 31 )
                *(_WORD *)(v202FFB4 + 1548) = v4;
              v3 = v5;
            }
            while ( v5 < (signed int)(unsigned __int16)v52 );
          }
        }
        else
        {
          v10 = 0;
          LOWORD(v11) = 0;
          v12 = 0;
          if ( (signed int)(unsigned __int16)v52 > 0 )
          {
            do
            {
              v13 = v10 << 16;
              v54 = HIWORD(v13) + 1;
              v14 = v13;
              if ( sub_8090D90((unsigned __int16)(HIWORD(v13) + 1), 0) << 24 )
                v12 = 1;
              if ( v12 )
              {
                v11 = (signed __int16)v11;
                v15 = 4 * (signed __int16)v11;
                *(_WORD *)(v202FFB4 + v15) = v54;
                v16 = sub_8090D90(v54, 0);
                *(_BYTE *)(v202FFB4 + v15 + 2) = *(_BYTE *)(v202FFB4 + v15 + 2) & 0xFE | v16 & 1;
                v17 = sub_8090D90(v54, 1);
                *(_BYTE *)(v202FFB4 + v15 + 2) = *(_BYTE *)(v202FFB4 + v15 + 2) & 0xFD | 2 * (v17 & 1);
                if ( *(_BYTE *)(v202FFB4 + v15 + 2) << 31 )
                  *(_WORD *)(v202FFB4 + 1548) = v11 + 1;
                v11 = (v11 + 1) & 0xFFFF;
              }
              v10 = (v14 + 0x10000) >> 16;
            }
            while ( (signed int)(v14 + 0x10000) >> 16 < (unsigned __int16)v52 );
          }
        }
        break;
      case 1u:
        v18 = 0;
        do
        {
          v19 = v18 << 16;
          v55 = *(__int16 *)((char *)&gPokedexOrder_Alphabetical + (v19 >> 15));
          v20 = v19;
          if ( (unsigned __int16)NationalToHoennOrder(v55) <= (unsigned int)(unsigned __int16)v52
            && sub_8090D90(v55, 0) << 24 )
          {
            v21 = v202FFB4;
            v22 = (_WORD *)(v202FFB4 + 1548);
            *(_WORD *)(v202FFB4 + 4 * *v22) = v55;
            *(_BYTE *)(v21 + 4 * *v22 + 2) |= 1u;
            v23 = sub_8090D90(v55, 1);
            v24 = v202FFB4 + 4 * *(_WORD *)(v202FFB4 + 1548);
            *(_BYTE *)(v24 + 2) = *(_BYTE *)(v24 + 2) & 0xFD | 2 * (v23 & 1);
            ++*(_WORD *)(v202FFB4 + 1548);
          }
          v18 = (unsigned int)(v19 + 0x10000) >> 16;
        }
        while ( v20 + 0x10000 <= 26869760 );
        break;
      case 2u:
        v25 = 385;
        v26 = 25231360;
        do
        {
          v56 = *(__int16 *)((char *)&gPokedexOrder_Weight + (v26 >> 15));
          if ( (unsigned __int16)NationalToHoennOrder(v56) <= (unsigned int)(unsigned __int16)v52
            && sub_8090D90(v56, 1) << 24 )
          {
            v27 = v202FFB4;
            v28 = (_WORD *)(v202FFB4 + 1548);
            *(_WORD *)(v202FFB4 + 4 * *v28) = v56;
            *(_BYTE *)(v27 + 4 * *v28 + 2) |= 1u;
            v29 = v202FFB4 + 4 * *(_WORD *)(v202FFB4 + 1548);
            *(_BYTE *)(v29 + 2) |= 2u;
            ++*(_WORD *)(v202FFB4 + 1548);
          }
          v25 = ((v25 << 16) - 0x10000) >> 16;
          v26 = v25 << 16;
        }
        while ( !(v25 & 0x8000) );
        break;
      case 3u:
        v30 = 0;
        do
        {
          v31 = v30 << 16;
          v57 = *(__int16 *)((char *)&gPokedexOrder_Weight + (v31 >> 15));
          v32 = v31;
          if ( (unsigned __int16)NationalToHoennOrder(v57) <= (unsigned int)(unsigned __int16)v52
            && sub_8090D90(v57, 1) << 24 )
          {
            v33 = v202FFB4;
            v34 = (_WORD *)(v202FFB4 + 1548);
            *(_WORD *)(v202FFB4 + 4 * *v34) = v57;
            *(_BYTE *)(v33 + 4 * *v34 + 2) |= 1u;
            v35 = v202FFB4 + 4 * *(_WORD *)(v202FFB4 + 1548);
            *(_BYTE *)(v35 + 2) |= 2u;
            ++*(_WORD *)(v202FFB4 + 1548);
          }
          v30 = (unsigned int)(v31 + 0x10000) >> 16;
        }
        while ( (v32 + 0x10000) >> 16 <= 385 );
        break;
      case 4u:
        v36 = 385;
        v37 = 25231360;
        do
        {
          v58 = *(__int16 *)((char *)&gPokedexOrder_Height + (v37 >> 15));
          if ( (unsigned __int16)NationalToHoennOrder(v58) <= (unsigned int)(unsigned __int16)v52
            && sub_8090D90(v58, 1) << 24 )
          {
            v38 = v202FFB4;
            v39 = (_WORD *)(v202FFB4 + 1548);
            *(_WORD *)(v202FFB4 + 4 * *v39) = v58;
            *(_BYTE *)(v38 + 4 * *v39 + 2) |= 1u;
            v40 = v202FFB4 + 4 * *(_WORD *)(v202FFB4 + 1548);
            *(_BYTE *)(v40 + 2) |= 2u;
            ++*(_WORD *)(v202FFB4 + 1548);
          }
          v36 = ((v36 << 16) - 0x10000) >> 16;
          v37 = v36 << 16;
        }
        while ( !(v36 & 0x8000) );
        break;
      case 5u:
        v41 = 0;
        do
        {
          v42 = v41 << 16;
          v59 = *(__int16 *)((char *)&gPokedexOrder_Height + (v42 >> 15));
          v43 = v42;
          if ( (unsigned __int16)NationalToHoennOrder(v59) <= (unsigned int)(unsigned __int16)v52
            && sub_8090D90(v59, 1) << 24 )
          {
            v44 = v202FFB4;
            v45 = (_WORD *)(v202FFB4 + 1548);
            *(_WORD *)(v202FFB4 + 4 * *v45) = v59;
            *(_BYTE *)(v44 + 4 * *v45 + 2) |= 1u;
            v46 = v202FFB4 + 4 * *(_WORD *)(v202FFB4 + 1548);
            *(_BYTE *)(v46 + 2) |= 2u;
            ++*(_WORD *)(v202FFB4 + 1548);
          }
          v41 = (unsigned int)(v42 + 0x10000) >> 16;
        }
        while ( (v43 + 0x10000) >> 16 <= 385 );
        break;
      default:
        break;
    }
  }
  v47 = *(_WORD *)(v202FFB4 + 1548);
  v48 = v47 << 16;
  if ( (signed __int16)v47 <= 385 )
  {
    do
    {
      v49 = v48 >> 16;
      v50 = v202FFB4 + 4 * v49;
      *(_WORD *)v50;
      *(_WORD *)v50 = -1;
      *(_BYTE *)(v50 + 2) &= 0xFEu;
      *(_BYTE *)(v202FFB4 + 4 * v49 + 2) &= 0xFDu;
      v48 = (v49 + 1) << 16;
    }
    while ( v48 >> 16 <= 385 );
  }
  return v60;
}
