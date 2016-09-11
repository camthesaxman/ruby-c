signed int unref_sub_81143CC()
{
  signed int v0; // r3@4
  signed int v1; // r2@4
  _BYTE *v2; // r0@4
  unsigned int v3; // r2@5
  int v4; // r8@5
  int v5; // r10@5
  __int16 v6; // r1@7
  signed int v7; // r5@7
  int v8; // r6@7
  int v9; // r7@8
  _BYTE *v10; // r4@8
  int v11; // r2@8
  _BYTE *v12; // ST0C_4@9
  signed int v13; // ST10_4@9
  __int16 v14; // r1@13
  signed int v15; // r5@13
  signed int v16; // r6@13
  int v17; // r7@14
  _BYTE *v18; // r4@14
  _BYTE *v19; // r2@14
  _BYTE *v20; // ST0C_4@16
  signed int v21; // ST10_4@16
  __int16 v22; // r1@18
  signed int v23; // r5@18
  int v24; // r6@18
  int v25; // r7@19
  _BYTE *v26; // r4@19
  int v27; // r2@19
  _BYTE *v28; // ST0C_4@20
  signed int v29; // ST10_4@20
  __int16 v30; // r1@24
  signed int v31; // r5@24
  signed int v32; // r6@24
  _BYTE *v33; // r4@25
  _BYTE *v34; // r2@25
  _BYTE *v35; // ST0C_4@27
  signed int v36; // ST10_4@27
  int v37; // r4@29
  signed int v38; // ST10_4@29
  int v39; // r0@29
  int v40; // r4@31
  signed int v41; // ST10_4@31
  int v42; // r0@31
  int v43; // r4@33
  signed int v44; // ST10_4@33
  int v45; // r0@33
  int v46; // r4@35
  signed int v47; // ST10_4@35
  int v48; // r0@35
  int v49; // r5@37
  _BYTE *v50; // r4@37
  int v51; // r5@40
  _BYTE *v52; // r4@40
  signed int v53; // ST10_4@40
  char *v54; // r0@41
  char v55; // r1@41
  _BYTE *v56; // r4@42
  signed int v57; // ST10_4@42
  _BYTE *v58; // r4@46
  unsigned int v59; // r1@50
  __int16 v60; // r1@52
  signed int v61; // r5@52
  signed int v62; // r6@52
  int v63; // r7@53
  _BYTE *v64; // r4@53
  int v65; // r3@53
  int v66; // r2@53
  _BYTE *v67; // ST0C_4@54
  int v68; // ST10_4@54
  __int16 v69; // r1@57
  signed int v70; // r5@57
  signed int v71; // r6@57
  int v72; // r7@58
  _BYTE *v73; // r4@58
  _BYTE *v74; // r2@58
  _BYTE *v75; // ST0C_4@61
  __int16 v76; // r1@63
  signed int v77; // r5@63
  int v78; // r6@63
  _BYTE *v79; // r4@64
  int v80; // r2@64
  _BYTE *v81; // ST0C_4@65
  int v82; // ST10_4@65
  __int16 v83; // r1@68
  signed int v84; // r5@68
  signed int v85; // r6@68
  int v86; // r7@69
  _BYTE *v87; // r4@69
  _BYTE *v88; // r2@69
  _BYTE *v89; // ST0C_4@72
  int v90; // r4@74
  int v91; // r4@76
  int v92; // r4@78
  int v93; // r4@80
  int v94; // r5@82
  _BYTE *v95; // r4@82
  int v96; // r5@85
  _BYTE *v97; // r4@85
  _BYTE *v98; // r4@87
  _BYTE *v99; // r4@89
  char *v100; // r0@60
  char v101; // r1@60
  int v103; // [sp+0h] [bp-34h]@3
  signed int v104; // [sp+4h] [bp-30h]@1
  int v105; // [sp+8h] [bp-2Ch]@4
  signed int v106; // [sp+10h] [bp-24h]@37
  signed int v107; // [sp+10h] [bp-24h]@46

  v104 = 1;
  if ( v201E8C4 )
    --v201E8C4;
  v103 = 0;
  do
  {
    v0 = 0;
    v1 = 33638400;
    v2 = (_BYTE *)(v103 + 33638532);
    v105 = v103 + 1;
    while ( v0 < *v2 )
    {
      v3 = *(_BYTE *)(v0 + 32 * v103 + v1 + 196);
      v4 = 32 * v103;
      v5 = v0 + 1;
      if ( v3 <= 0xC )
      {
        switch ( v3 )
        {
          case 1u:
            v104 = 0;
            v6 = *(_WORD *)(2 * v0 + (v103 << 6) + 0x201C8C4) + *(_WORD *)(2 * v0 + (v103 << 6) + 0x201A8C4);
            v7 = (v6 & 0xFF00u) >> 8;
            *(_WORD *)(2 * v0 + (v103 << 6) + 0x201A8C4) = (unsigned __int8)v6;
            v8 = 0;
            v5 = v0 + 1;
            if ( v7 <= 0 )
              goto def_8114430;
            v9 = v0 + v4;
            v10 = (_BYTE *)(v0 + v4 + 33650884);
            v11 = v0 + v4 + 33646788;
            while ( 1 )
            {
              --*v10;
              v12 = (_BYTE *)v11;
              v13 = v0;
              sub_8114DB4(v103, *v10);
              v11 = (int)v12;
              v0 = v13;
              if ( *v10 == *v12 )
                break;
              if ( ++v8 >= v7 )
                goto def_8114430;
            }
            *(_BYTE *)(v9 + 33638596) = 0;
            goto def_8114430;
          case 2u:
            v104 = 0;
            v14 = *(_WORD *)(2 * v0 + (v103 << 6) + 0x201C8C4) + *(_WORD *)(2 * v0 + (v103 << 6) + 0x201A8C4);
            v15 = (v14 & 0xFF00u) >> 8;
            *(_WORD *)(2 * v0 + (v103 << 6) + 0x201A8C4) = (unsigned __int8)v14;
            v16 = 0;
            v5 = v0 + 1;
            if ( v15 > 0 )
            {
              v17 = v0 + v4;
              v18 = (_BYTE *)(v0 + v4 + 33650884);
              v19 = (_BYTE *)(v0 + v4 + 33646788);
              do
              {
                if ( *v18 == *v19 )
                  goto _081148B8;
                v20 = v19;
                v21 = v0;
                sub_8114DF0(v103, *v18);
                --*v18;
                ++v16;
                v19 = v20;
                v0 = v21;
              }
              while ( v16 < v15 );
            }
            goto def_8114430;
          case 3u:
            v104 = 0;
            v22 = *(_WORD *)(2 * v0 + (v103 << 6) + 0x201C8C4) + *(_WORD *)(2 * v0 + (v103 << 6) + 0x201A8C4);
            v23 = (v22 & 0xFF00u) >> 8;
            *(_WORD *)(2 * v0 + (v103 << 6) + 0x201A8C4) = (unsigned __int8)v22;
            v24 = 0;
            v5 = v0 + 1;
            if ( v23 <= 0 )
              goto def_8114430;
            v25 = v0 + v4;
            v26 = (_BYTE *)(v0 + v4 + 33650884);
            v27 = v0 + v4 + 33646788;
            while ( 1 )
            {
              ++*v26;
              v28 = (_BYTE *)v27;
              v29 = v0;
              sub_8114DB4(v103, *v26);
              v27 = (int)v28;
              v0 = v29;
              if ( *v26 == *v28 )
                break;
              if ( ++v24 >= v23 )
                goto def_8114430;
            }
            *(_BYTE *)(v25 + 33638596) = 0;
            goto def_8114430;
          case 4u:
            v104 = 0;
            v30 = *(_WORD *)(2 * v0 + (v103 << 6) + 0x201C8C4) + *(_WORD *)(2 * v0 + (v103 << 6) + 0x201A8C4);
            v31 = (v30 & 0xFF00u) >> 8;
            *(_WORD *)(2 * v0 + (v103 << 6) + 0x201A8C4) = (unsigned __int8)v30;
            v32 = 0;
            v5 = v0 + 1;
            if ( v31 <= 0 )
              goto def_8114430;
            v17 = v0 + v4;
            v33 = (_BYTE *)(v0 + v4 + 33650884);
            v34 = (_BYTE *)(v0 + v4 + 33646788);
            break;
          case 5u:
            v104 = 0;
            v37 = v0 + v4;
            v38 = v0;
            v39 = sub_8114E48(v103, *(_BYTE *)(v0 + v4 + 33650884));
            v0 = v38;
            v5 = v38 + 1;
            if ( v39 << 24 )
              *(_BYTE *)(v37 + 33638596) = 9;
            goto def_8114430;
          case 6u:
            v104 = 0;
            v40 = v0 + v4;
            v41 = v0;
            v42 = sub_8114E48(v103, *(_BYTE *)(v0 + v4 + 33650884));
            v0 = v41;
            v5 = v41 + 1;
            if ( v42 << 24 )
              *(_BYTE *)(v40 + 33638596) = 10;
            goto def_8114430;
          case 7u:
            v104 = 0;
            v43 = v0 + v4;
            v44 = v0;
            v45 = sub_8114E48(v103, *(_BYTE *)(v0 + v4 + 33650884));
            v0 = v44;
            v5 = v44 + 1;
            if ( v45 << 24 )
              *(_BYTE *)(v43 + 33638596) = 11;
            goto def_8114430;
          case 8u:
            v104 = 0;
            v46 = v0 + v4;
            v47 = v0;
            v48 = sub_8114E48(v103, *(_BYTE *)(v0 + v4 + 33650884));
            v0 = v47;
            v5 = v47 + 1;
            if ( v48 << 24 )
              *(_BYTE *)(v46 + 33638596) = 12;
            goto def_8114430;
          case 9u:
            v104 = 0;
            v49 = v0 + v4;
            v50 = (_BYTE *)(v0 + v4 + 33650884);
            v106 = v0;
            sub_8114DB4(v103, *v50);
            v0 = v106;
            if ( *v50 == *(_BYTE *)(v49 + 33646788) )
            {
              *(_BYTE *)(v49 + 33638596) = 0;
              goto _08114844;
            }
            *(_BYTE *)(v49 + 33638596) = 1;
            v5 = v106 + 1;
            goto def_8114430;
          case 0xAu:
            v104 = 0;
            v51 = v0 + v4;
            v52 = (_BYTE *)(v0 + v4 + 33650884);
            v53 = v0;
            sub_8114DF0(v103, *v52);
            v0 = v53;
            if ( *v52 == *(_BYTE *)(v51 + 33646788) )
              goto _08114882;
            v54 = (char *)(v51 + 33638596);
            v55 = 2;
            goto _08114842;
          case 0xBu:
            v104 = 0;
            v51 = v0 + v4;
            v56 = (_BYTE *)(v0 + v4 + 33650884);
            v57 = v0;
            sub_8114DB4(v103, *v56);
            v0 = v57;
            if ( *v56 == *(_BYTE *)(v51 + 33646788) )
              goto _08114882;
            v54 = (char *)(v51 + 33638596);
            v55 = 3;
_08114842:
            *v54 = v55;
_08114844:
            v5 = v0 + 1;
            goto def_8114430;
          case 0xCu:
            v104 = 0;
            v51 = v0 + v4;
            v58 = (_BYTE *)(v0 + v4 + 33650884);
            v107 = v0;
            sub_8114DF0(v103, *v58);
            v0 = v107;
            if ( *v58 == *(_BYTE *)(v51 + 33646788) )
            {
_08114882:
              *(_BYTE *)(v51 + 33638596) = v104;
              v5 = v0 + 1;
            }
            else
            {
              *(_BYTE *)(v51 + 33638596) = 4;
              v5 = v107 + 1;
            }
            goto def_8114430;
          default:
            goto def_8114430;
        }
        while ( *v33 != *v34 )
        {
          v35 = v34;
          v36 = v0;
          sub_8114DF0(v103, *v33);
          ++*v33;
          ++v32;
          v34 = v35;
          v0 = v36;
          if ( v32 >= v31 )
            goto def_8114430;
        }
_081148B8:
        *(_BYTE *)(v17 + 33638596) = 0;
      }
def_8114430:
      v59 = *(_BYTE *)(v0 + v4 + 33640644);
      if ( v59 <= 0xC )
      {
        switch ( v59 )
        {
          case 1u:
            v104 = 0;
            v60 = *(_WORD *)(2 * v0 + (v103 << 6) + 0x201D8C4) + *(_WORD *)(2 * v0 + (v103 << 6) + 0x201B8C4);
            v61 = (v60 & 0xFF00u) >> 8;
            *(_WORD *)(2 * v0 + (v103 << 6) + 0x201B8C4) = (unsigned __int8)v60;
            v62 = 0;
            if ( v61 > 0 )
            {
              v63 = v0 + v4;
              v64 = (_BYTE *)(v0 + v4 + 33652932);
              v65 = 0;
              v66 = v63 + 33648836;
              do
              {
                --*v64;
                v67 = (_BYTE *)v66;
                v68 = v65;
                sub_8114DB4(v103, *v64);
                v66 = (int)v67;
                v65 = v68;
                if ( *v64 == *v67 )
                  goto _08114D4C;
                ++v62;
              }
              while ( v62 < v61 );
            }
            goto def_81148F0;
          case 2u:
            v104 = 0;
            v69 = *(_WORD *)(2 * v0 + (v103 << 6) + 0x201D8C4) + *(_WORD *)(2 * v0 + (v103 << 6) + 0x201B8C4);
            v70 = (v69 & 0xFF00u) >> 8;
            *(_WORD *)(2 * v0 + (v103 << 6) + 0x201B8C4) = (unsigned __int8)v69;
            v71 = 0;
            if ( v70 > 0 )
            {
              v72 = v0 + v4;
              v73 = (_BYTE *)(v0 + v4 + 33652932);
              v74 = (_BYTE *)(v0 + v4 + 33648836);
              do
              {
                if ( *v73 == *v74 )
                {
                  v100 = (char *)(v72 + 33640644);
                  v101 = 0;
                  goto _08114D74;
                }
                v75 = v74;
                sub_8114DF0(v103, *v73);
                --*v73;
                ++v71;
                v74 = v75;
              }
              while ( v71 < v70 );
            }
            goto def_81148F0;
          case 3u:
            v104 = 0;
            v76 = *(_WORD *)(2 * v0 + (v103 << 6) + 0x201D8C4) + *(_WORD *)(2 * v0 + (v103 << 6) + 0x201B8C4);
            v77 = (v76 & 0xFF00u) >> 8;
            *(_WORD *)(2 * v0 + (v103 << 6) + 0x201B8C4) = (unsigned __int8)v76;
            v78 = 0;
            if ( v77 <= 0 )
              goto def_81148F0;
            v63 = v0 + v4;
            v79 = (_BYTE *)(v0 + v4 + 33652932);
            v65 = 0;
            v80 = v63 + 33648836;
            break;
          case 4u:
            v104 = 0;
            v83 = *(_WORD *)(2 * v0 + (v103 << 6) + 0x201D8C4) + *(_WORD *)(2 * v0 + (v103 << 6) + 0x201B8C4);
            v84 = (v83 & 0xFF00u) >> 8;
            *(_WORD *)(2 * v0 + (v103 << 6) + 0x201B8C4) = (unsigned __int8)v83;
            v85 = 0;
            if ( v84 > 0 )
            {
              v86 = v0 + v4;
              v87 = (_BYTE *)(v0 + v4 + 33652932);
              v88 = (_BYTE *)(v0 + v4 + 33648836);
              do
              {
                if ( *v87 == *v88 )
                {
                  v100 = (char *)(v86 + 33640644);
                  v101 = 0;
                  goto _08114D74;
                }
                v89 = v88;
                sub_8114DF0(v103, *v87);
                ++*v87;
                ++v85;
                v88 = v89;
              }
              while ( v85 < v84 );
            }
            goto def_81148F0;
          case 5u:
            v104 = 0;
            v90 = v0 + v4;
            if ( sub_8114E48(v103, *(_BYTE *)(v0 + 32 * v103 + 33652932)) << 24 )
            {
              v100 = (char *)(v90 + 33640644);
              v101 = 9;
              goto _08114D74;
            }
            goto def_81148F0;
          case 6u:
            v104 = 0;
            v91 = v0 + v4;
            if ( sub_8114E48(v103, *(_BYTE *)(v0 + 32 * v103 + 33652932)) << 24 )
            {
              v100 = (char *)(v91 + 33640644);
              v101 = 10;
              goto _08114D74;
            }
            goto def_81148F0;
          case 7u:
            v104 = 0;
            v92 = v0 + v4;
            if ( sub_8114E48(v103, *(_BYTE *)(v0 + 32 * v103 + 33652932)) << 24 )
            {
              v100 = (char *)(v92 + 33640644);
              v101 = 11;
              goto _08114D74;
            }
            goto def_81148F0;
          case 8u:
            v104 = 0;
            v93 = v0 + v4;
            if ( sub_8114E48(v103, *(_BYTE *)(v0 + 32 * v103 + 33652932)) << 24 )
            {
              v100 = (char *)(v93 + 33640644);
              v101 = 12;
              goto _08114D74;
            }
            goto def_81148F0;
          case 9u:
            v104 = 0;
            v94 = v0 + v4;
            v95 = (_BYTE *)(v0 + v4 + 33652932);
            sub_8114DB4(v103, *v95);
            if ( *v95 != *(_BYTE *)(v94 + 33648836) )
            {
              v100 = (char *)(v94 + 33640644);
              v101 = 1;
              goto _08114D74;
            }
            *(_BYTE *)(v94 + 33640644) = 0;
            goto def_81148F0;
          case 0xAu:
            v104 = 0;
            v96 = v0 + v4;
            v97 = (_BYTE *)(v0 + v4 + 33652932);
            sub_8114DF0(v103, *v97);
            if ( *v97 == *(_BYTE *)(v96 + 33648836) )
              goto _08114D1E;
            v100 = (char *)(v96 + 33640644);
            v101 = 2;
            goto _08114D74;
          case 0xBu:
            v104 = 0;
            v96 = v0 + v4;
            v98 = (_BYTE *)(v0 + v4 + 33652932);
            sub_8114DB4(v103, *v98);
            if ( *v98 == *(_BYTE *)(v96 + 33648836) )
              goto _08114D1E;
            v100 = (char *)(v96 + 33640644);
            v101 = 3;
            goto _08114D74;
          case 0xCu:
            v104 = 0;
            v96 = v0 + v4;
            v99 = (_BYTE *)(v0 + v4 + 33652932);
            sub_8114DF0(v103, *v99);
            if ( *v99 == *(_BYTE *)(v96 + 33648836) )
            {
_08114D1E:
              *(_BYTE *)(v96 + 33640644) = v104;
            }
            else
            {
              v100 = (char *)(v96 + 33640644);
              v101 = 4;
_08114D74:
              *v100 = v101;
            }
            goto def_81148F0;
          default:
            goto def_81148F0;
        }
        while ( 1 )
        {
          ++*v79;
          v81 = (_BYTE *)v80;
          v82 = v65;
          sub_8114DB4(v103, *v79);
          v80 = (int)v81;
          v65 = v82;
          if ( *v79 == *v81 )
            break;
          if ( ++v78 >= v77 )
            goto def_81148F0;
        }
_08114D4C:
        *(_BYTE *)(v63 + 33640644) = v65;
      }
def_81148F0:
      v0 = v5;
      v1 = 33638400;
      v2 = (_BYTE *)(v103 + 33638532);
    }
    ++v103;
  }
  while ( v105 <= 63 );
  return v104;
}
