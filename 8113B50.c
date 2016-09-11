int __fastcall unref_sub_8113B50(int a1, int a2)
{
  signed int v2; // r6@2
  int v3; // r9@2
  int v4; // r1@3
  int v5; // r8@5
  int v6; // r5@5
  _BYTE *v7; // r4@5
  signed int v8; // r3@6
  _BYTE *v9; // r2@6
  signed int v10; // r6@6
  char v11; // r7@6
  int v12; // r1@13
  signed int v13; // r0@13
  int v14; // r1@20
  signed int v15; // r0@20
  int v16; // r8@35
  int v17; // r5@35
  _BYTE *v18; // r4@35
  signed int v19; // r3@36
  _BYTE *v20; // r2@36
  int v21; // r6@36
  int v22; // r1@43
  signed int v23; // r0@43
  int v24; // r1@50
  signed int v25; // r0@50
  int v26; // r1@54
  signed int v27; // r6@68
  _BYTE *v28; // r7@69
  int v29; // r5@69
  _BYTE *v30; // r8@69
  _BYTE *v31; // r0@70
  int v32; // r1@71
  int v33; // r0@71
  int v34; // r3@73
  _BYTE *v35; // r4@73
  _BYTE *v36; // r2@73
  int v37; // r1@74
  int v38; // r0@74
  int v39; // r3@76
  signed int i; // r6@82
  int v41; // r1@83
  signed int j; // r6@88
  int v43; // r9@92
  signed int v44; // r6@93
  int v45; // r10@94
  _BYTE *v46; // r8@94
  int v47; // r7@94
  _BYTE *v48; // r5@94
  _BYTE *v49; // r12@94
  int v50; // r1@96
  int v51; // r0@96
  int v52; // r3@98
  _BYTE *v53; // r2@98
  int v54; // r1@99
  int v55; // r0@99
  int v56; // r3@101
  int v57; // r3@105
  signed int k; // r6@106
  int v59; // r2@107
  _BYTE *v60; // r10@107
  _BYTE *v61; // r3@107
  char v62; // r2@109
  int v64; // [sp+0h] [bp-5Ch]@1
  int v65; // [sp+4h] [bp-58h]@1
  signed int v66; // [sp+8h] [bp-54h]@1
  signed int v67; // [sp+8h] [bp-54h]@5
  signed int v68; // [sp+8h] [bp-54h]@35
  int v69; // [sp+8h] [bp-54h]@65
  signed int v70; // [sp+Ch] [bp-50h]@1
  signed int v71; // [sp+10h] [bp-4Ch]@1
  signed int v72; // [sp+14h] [bp-48h]@68
  signed int v73; // [sp+14h] [bp-48h]@93
  int v74; // [sp+24h] [bp-38h]@92
  _BYTE *v75; // [sp+2Ch] [bp-30h]@92
  int v76; // [sp+30h] [bp-2Ch]@66
  int v77; // [sp+34h] [bp-28h]@68
  int v78; // [sp+38h] [bp-24h]@93
  int v79; // [sp+58h] [bp-4h]@0

  v64 = a1;
  v65 = a2;
  v70 = 0;
  v71 = 0;
  v66 = 0;
  do
  {
    *(_BYTE *)(v66 + 33638532) = 0;
    *(_BYTE *)(v66 + 33638404) = 0;
    *(_BYTE *)(v66 + 33638468) = 0;
    v2 = 0;
    v3 = 32 * v66;
    do
    {
      *(_BYTE *)(v2 + v3 + 33642692) = 0;
      *(_BYTE *)(v2 + v3 + 33644740) = 0;
      *(_BYTE *)(v2 + v3 + 33646788) = 0;
      *(_BYTE *)(v2 + v3 + 33648836) = 0;
      *(_BYTE *)(v2 + v3 + 33638596) = 0;
      *(_BYTE *)(v2 + v3 + 33640644) = 0;
      *(_BYTE *)(v2 + v3 + 33650884) = 0;
      *(_BYTE *)(v2 + v3 + 33652932) = 0;
      v4 = 2 * v2 + (v66 << 6);
      *(_WORD *)(v4 + 33663172) = 0;
      *(_WORD *)(v4 + 33667268) = 0;
      *(_WORD *)(v4 + 33671364) = 0;
      *(_WORD *)(v4 + 33675460) = 0;
      ++v2;
    }
    while ( v2 <= 31 );
    ++v66;
  }
  while ( v66 <= 63 );
  v201E8C4 = 64;
  v5 = 0;
  v67 = 0;
  v6 = 0;
  v7 = (_BYTE *)33638404;
  do
  {
    v8 = 0;
    v9 = (_BYTE *)(v64 + v5);
    v10 = 0;
    v11 = -1;
    do
    {
      *(_DWORD *)(4 * (v10 >> 1) + (v67 << 7) + 0x20188C4) = v9;
      if ( v8 )
      {
        if ( v8 != 1 )
          goto _08113CF4;
        if ( v10 & 1 )
        {
          if ( (v10 & 1) != 1 )
            goto _08113CF4;
          v14 = *v9;
          v15 = 240;
        }
        else
        {
          v14 = *v9;
          v15 = 15;
        }
        if ( !(v15 & v14) )
        {
          *(_BYTE *)((*v7)++ + v6 + 33644740) = v11;
          v8 = 0;
        }
      }
      else
      {
        if ( v10 & 1 )
        {
          if ( (v10 & 1) != 1 )
            goto _08113CF4;
          v12 = *v9;
          v13 = 240;
        }
        else
        {
          v12 = *v9;
          v13 = 15;
        }
        if ( v13 & v12 )
        {
          *(_BYTE *)(*v7 + v6 + 33642692) = v10;
          v8 = 1;
        }
      }
_08113CF4:
      if ( (v10 + 1) & 7 )
      {
        if ( v10 & 1 )
          ++v9;
      }
      else
      {
        v9 += 29;
      }
      ++v11;
      ++v10;
    }
    while ( v10 <= 63 );
    if ( v8 )
      *(_BYTE *)((*v7)++ + v6 + 33644740) = v10;
    if ( ((_BYTE)v67 + 1) & 7 )
      v5 += 4;
    else
      v5 += 228;
    v6 += 32;
    ++v7;
    ++v67;
  }
  while ( v67 <= 63 );
  v16 = 0;
  v68 = 0;
  v17 = 0;
  v18 = (_BYTE *)33638468;
  do
  {
    v19 = 0;
    v20 = (_BYTE *)(v65 + v16);
    v21 = 0;
    do
    {
      if ( v19 )
      {
        if ( v19 != 1 )
          goto _08113DE4;
        if ( v21 & 1 )
        {
          if ( (v21 & 1) != 1 )
            goto _08113DE4;
          v24 = *v20;
          v25 = 240;
        }
        else
        {
          v24 = *v20;
          v25 = 15;
        }
        if ( !(v25 & v24) )
        {
          *(_BYTE *)((*v18)++ + v17 + 33648836) = v21 - 1;
          v19 = 0;
        }
      }
      else
      {
        if ( v21 & 1 )
        {
          if ( (v21 & 1) != 1 )
            goto _08113DE4;
          v22 = *v20;
          v23 = 240;
        }
        else
        {
          v22 = *v20;
          v23 = 15;
        }
        if ( v23 & v22 )
        {
          *(_BYTE *)(*v18 + v17 + 33646788) = v21;
          v19 = 1;
        }
      }
_08113DE4:
      v26 = v21 + 1;
      if ( (v21 + 1) & 7 )
      {
        if ( v21 & 1 )
          ++v20;
      }
      else
      {
        v20 += 29;
      }
      ++v21;
    }
    while ( v26 <= 63 );
    if ( v19 )
      *(_BYTE *)((*v18)++ + v17 + 33648836) = v26;
    if ( ((_BYTE)v68 + 1) & 7 )
      v16 += 4;
    else
      v16 += 228;
    v17 += 32;
    ++v18;
    ++v68;
  }
  while ( v68 <= 63 );
  v69 = 0;
  do
  {
    v76 = v69 + 1;
    if ( *(_BYTE *)(v69 + 33638404) < (unsigned int)*(_BYTE *)(v69 + 33638468) )
    {
      v70 = 0;
      if ( (signed int)*(_BYTE *)(v69 + 33638404) > 0 )
      {
        do
        {
          v72 = 256;
          v27 = 0;
          v77 = v70 + 1;
          if ( (signed int)*(_BYTE *)(v69 + 33638468) > 0 )
          {
            v28 = (_BYTE *)(32 * v69 + 33638596);
            v29 = 32 * v69;
            v30 = (_BYTE *)(v70 + 32 * v69 + 33642692);
            do
            {
              v31 = (_BYTE *)(v29 + 33646788);
              if ( *v30 <= (unsigned int)*(_BYTE *)(v29 + 33646788) )
              {
                v32 = *v31;
                v33 = *v30;
              }
              else
              {
                v32 = *v30;
                v33 = *v31;
              }
              v34 = v32 - v33;
              v35 = (_BYTE *)(v70 + 32 * v69 + 33644740);
              v36 = (_BYTE *)(v29 + 33648836);
              if ( *v35 <= (unsigned int)*(_BYTE *)(v29 + 33648836) )
              {
                v37 = *v36;
                v38 = *v35;
              }
              else
              {
                v37 = *v35;
                v38 = *v36;
              }
              v39 = v34 + v37 - v38;
              if ( v72 > v39 && !*v28 && !*(_BYTE *)(v29 + 33640644) )
              {
                v71 = v27;
                v72 = v39;
              }
              ++v28;
              ++v29;
              ++v27;
            }
            while ( v27 < *(_BYTE *)(v69 + 33638468) );
          }
          sub_81141F0(v70++, v71, v69);
        }
        while ( v77 < *(_BYTE *)(v69 + 33638404) );
      }
      for ( i = 0; i < *(_BYTE *)(v69 + 33638468); ++i )
      {
        v41 = i + 32 * v69;
        if ( !*(_BYTE *)(v41 + 33638596) && !*(_BYTE *)(v41 + 33640644) )
          sub_811430C(i, v69);
      }
    }
    if ( *(_BYTE *)(v69 + 33638404) == *(_BYTE *)(v69 + 33638468) )
    {
      for ( j = 0; j < *(_BYTE *)(v69 + 33638404); ++j )
        sub_81141F0(j, j, v69);
    }
    if ( *(_BYTE *)(v69 + 33638404) > (unsigned int)*(_BYTE *)(v69 + 33638468) )
    {
      v71 = 0;
      if ( (signed int)*(_BYTE *)(v69 + 33638468) > 0 )
      {
        v75 = (_BYTE *)(v69 + 33638404);
        v43 = 32 * v69;
        v74 = 32 * v69;
        do
        {
          v73 = 256;
          v44 = 0;
          v78 = v71 + 1;
          if ( (signed int)*v75 > 0 )
          {
            v45 = v71 + v74;
            v46 = (_BYTE *)(v74 + 33638596);
            v47 = 32 * v69;
            v48 = (_BYTE *)(v74 + 33642692);
            v49 = (_BYTE *)(v71 + v74 + 33646788);
            do
            {
              if ( *v48 <= (unsigned int)*v49 )
              {
                v50 = *v49;
                v51 = *v48;
              }
              else
              {
                v50 = *v48;
                v51 = *v49;
              }
              v52 = v50 - v51;
              v53 = (_BYTE *)(v45 + 33648836);
              if ( *(_BYTE *)(v47 + 33644740) <= (unsigned int)*(_BYTE *)(v45 + 33648836) )
              {
                v54 = *v53;
                v55 = *(_BYTE *)(v47 + 33644740);
              }
              else
              {
                v54 = *(_BYTE *)(v47 + 33644740);
                v55 = *v53;
              }
              v56 = v52 + v54 - v55;
              if ( v73 > v56 && !*v46 )
              {
                v70 = v44;
                v73 = v56;
              }
              ++v46;
              ++v47;
              ++v48;
              ++v44;
            }
            while ( v44 < *v75 );
          }
          v57 = v70 + v43;
          *(_BYTE *)(v70 + v43 + 33650884) = *(_BYTE *)(v71 + v43 + 33646788);
          *(_BYTE *)(v57 + 33652932) = *(_BYTE *)(v71 + v43 + 33648836);
          *(_BYTE *)(v57 + 33638596) = 1;
          ++v71;
        }
        while ( v78 < *(_BYTE *)(v69 + 33638468) );
      }
      for ( k = 0; k < *(_BYTE *)(v69 + 33638404); ++k )
      {
        v59 = k + 32 * v69;
        v60 = (_BYTE *)(v59 + 33646788);
        *(_BYTE *)(v59 + 33646788) = *(_BYTE *)(v59 + 33650884);
        v61 = (_BYTE *)(v59 + 33648836);
        *(_BYTE *)(v59 + 33648836) = *(_BYTE *)(v59 + 33652932);
        if ( *(_BYTE *)(v59 + 33638596) )
        {
          *(_BYTE *)(v59 + 33638596) = 0;
          sub_81141F0(k, k, v69);
        }
        else
        {
          v62 = *(_BYTE *)(v59 + 33642692) + (*(_BYTE *)(v59 + 33644740) - *(_BYTE *)(v59 + 33642692)) / 2;
          *v61 = v62;
          *v60 = v62;
          --*v61;
          sub_81141F0(k, k, v69);
        }
      }
    }
    ++v69;
  }
  while ( v76 <= 63 );
  return v79;
}
