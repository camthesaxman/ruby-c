int __fastcall sub_80AC2CC(int a1)
{
  int v1; // r8@1
  int v2; // r7@1
  unsigned int v3; // r0@1
  int v4; // r6@3
  unsigned __int8 v5; // r0@8
  int v6; // r0@8
  int v7; // r2@15
  int *v8; // r1@15
  _BYTE *v9; // r0@16
  unsigned __int8 v10; // r0@18
  __int16 v11; // r5@18
  int v12; // r0@18
  int *v13; // r4@18
  unsigned __int8 v14; // r0@18
  int *v15; // r2@19
  unsigned int v16; // r1@24
  int v17; // r4@30
  __int16 v18; // r4@31
  int *v19; // r1@33
  int v20; // r0@34
  int *v21; // r0@36
  int v22; // r1@36
  int *v23; // r2@37
  __int16 v24; // r0@37
  int *v25; // r4@39
  signed int v26; // r6@42
  int v27; // r3@54
  int v28; // r0@59
  int *v29; // r0@75
  int *v30; // r1@76
  __int16 v31; // r0@77
  int *v32; // r0@83
  int v33; // r2@84
  signed int v34; // r4@84
  signed int v35; // r6@84
  int *v36; // r5@96
  int v37; // r4@96
  int *v38; // r0@97
  int v39; // r6@100
  int v40; // r6@103
  int v41; // r3@103
  int v42; // r6@107
  int *v43; // r0@110
  int *v44; // r1@111
  __int16 v45; // r0@112
  signed int v46; // r6@115
  int *v47; // r1@123
  int *v48; // r3@124
  __int16 v49; // r0@124
  int v50; // r0@125
  int v51; // r0@133
  signed int v52; // r4@133
  void *v53; // r1@135
  int *v54; // r0@140
  int *v55; // r4@146
  __int16 v56; // r0@146
  int *v57; // r0@151
  int *v58; // r4@153
  int *v59; // r4@160
  signed int v60; // r4@164
  int v61; // r0@167
  int v62; // r2@170
  signed int v63; // r4@170
  int *v64; // r0@173
  int v65; // r1@173
  int *v66; // r1@180
  int *v67; // r4@183
  signed int v68; // r2@183
  __int16 v69; // r0@195
  unsigned int v70; // r0@200
  signed int v71; // r1@203
  int *v72; // r3@207
  __int16 v73; // r0@207
  int *v74; // r0@215
  int v75; // r0@219
  int v76; // r0@221
  int *v77; // r2@234
  int *v78; // r4@235
  char *v79; // r6@235
  signed int v80; // r6@237
  int v81; // r2@237
  int *v82; // r0@239
  int *v83; // r1@243
  __int16 v84; // r0@243
  int *v85; // r0@246
  int v87; // [sp+24h] [bp-4h]@0

  a1 = (unsigned __int8)a1;
  v1 = a1;
  v2 = v2019215;
  v3 = LOWORD(dword_3004B20[10 * (unsigned __int8)a1 + 2]);
  if ( v3 > 0x3B )
    return v87;
  switch ( v3 )
  {
    case 0u:
      sub_80B0D7C();
      v4 = 0;
      if ( v2019214 != v20192D0 )
      {
        do
          ++v4;
        while ( v2019214 != *(_BYTE *)(v4 + 33657552) );
      }
      v2019215 = v4;
      if ( v203869A & 1 )
      {
        v201920B |= 4u;
        if ( sub_80AE074() << 24 )
          sub_80B114C(v2019215);
        v5 = CreateTask((int)sub_80C8C80, 0);
        v6 = SetTaskFuncWithFollowupFunc(v5, (int)sub_80C8C80, (int)sub_80AD8DC);
        sub_80AF860(v6);
        LOWORD(dword_3004B20[10 * v1 + 2]) = 1;
      }
      else
      {
        sub_80B114C((unsigned __int8)v4);
        LOWORD(dword_3004B20[10 * v1 + 2]) = 2;
      }
      return v87;
    case 1u:
      if ( !(v201920B & 4) )
        LOWORD(dword_3004B20[10 * v1 + 2]) = 2;
      return v87;
    case 2u:
      if ( *(_BYTE *)(28 * v2019215 + 0x201926C) & 6 || *(_BYTE *)(28 * v2019215 + 0x201926B) & 0x80 )
      {
        LOWORD(dword_3004B20[10 * v1 + 2]) = 31;
      }
      else
      {
        sub_80AF138((unsigned __int8)(*(_BYTE *)(28 * v2019215 + 0x201926B) & 0x80) << 24);
        sub_80B0CDC(v2, 0, v7);
        v8 = &dword_3004B20[10 * v1];
        *((_WORD *)v8 + 14) = 0;
        *((_WORD *)v8 + 4) = 3;
      }
      return v87;
    case 3u:
      v9 = (_BYTE *)33705607;
      do
        *v9-- = 0;
      while ( (signed int)v9 >= 33705604 );
      memset(33657672, 0, 20);
      sub_80B28F0(v2019215);
      v10 = sub_80AE9FC(
              *(_WORD *)((v2019215 << 6) + 0x2038570),
              *(_DWORD *)((v2019215 << 6) + 0x20385AC),
              *(_DWORD *)((v2019215 << 6) + 0x20385A8));
      v11 = v10;
      v12 = 17 * v10;
      *(_WORD *)&gSprites[v12 * 4 + 36] = 120;
      dword_2020020[v12] = (int)sub_80AD8FC;
      v13 = &dword_3004B20[10 * v1];
      *((_WORD *)v13 + 6) = v11;
      *(_BYTE *)(v2024C07 + 0x2024BE0) = v11;
      v14 = sub_80B09E4(v2019215);
      sub_80B0BC4(v14, 0);
      *((_WORD *)v13 + 4) = 4;
      return v87;
    case 4u:
      v15 = &dword_3004B20[10 * v1];
      if ( (void (*)())dword_2020020[17 * *((_BYTE *)v15 + 12)] == SpriteCallbackDummy
        && !(*(_BYTE *)(4 * v2019215 + 0x201933A) & 2) )
      {
        *((_WORD *)v15 + 4) = 5;
      }
      return v87;
    case 5u:
      if ( *(_BYTE *)(28 * v2019215 + 0x201926C) & 1 )
      {
        LOWORD(dword_3004B20[10 * v1 + 2]) = 33;
      }
      else
      {
        sub_80AF138(0);
        StringCopy(&gStringVar1, (_BYTE *)((v2 << 6) + 33785202));
        v16 = *(_WORD *)(28 * v2 + 0x2019266);
        if ( v16 > 0x162 )
          StringCopy(&gStringVar2, gUnknown_083CC330[*(_BYTE *)(28 * v2 + 0x201926A)]);
        else
          StringCopy(&gStringVar2, &gMoveNames[13 * v16]);
        StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_083CAFD7);
        sub_8002EB0(33745160, (int)&gStringVar4, 776, 1, 0xFu);
        LOWORD(dword_3004B20[10 * v1 + 2]) = 6;
      }
      return v87;
    case 6u:
      if ( sub_80037A0(33745160) << 24 )
      {
        v201925E = 0;
        LOWORD(dword_3004B20[10 * v1 + 2]) = 7;
      }
      return v87;
    case 7u:
      v17 = (unsigned __int16)sub_80B2760(*(_WORD *)(28 * v2019215 + 0x2019266));
      sub_80B2790(v2019215);
      sub_80B28F0(v2019215);
      sub_80B29B4(v17);
      move_anim_start_t1(v17);
      LOWORD(dword_3004B20[10 * v1 + 2]) = 8;
      return v87;
    case 8u:
      call_via_r0(v202F7AC);
      v18 = v202F7B1;
      if ( !v202F7B1 )
      {
        unref_sub_80B28CC(v2);
        if ( !v201925E )
        {
          v20 = *(_BYTE *)(28 * v2 + 0x2019275) & 0x10;
          if ( !(*(_BYTE *)(28 * v2 + 0x2019275) & 0x10) )
            v20 = sub_80B03A8(v2);
          unref_sub_80B20C4(v20);
          v21 = dword_3004B20;
          v22 = 4 * v1;
          goto _080AC8E2;
        }
        v19 = &dword_3004B20[10 * v1];
        *((_WORD *)v19 + 14) = v18;
        *((_WORD *)v19 + 4) = 9;
      }
      return v87;
    case 9u:
      v23 = &dword_3004B20[10 * v1];
      v24 = *((_WORD *)v23 + 14);
      *((_WORD *)v23 + 14) = v24 + 1;
      if ( v24 > 30 )
      {
        *((_WORD *)v23 + 14) = 0;
        *((_WORD *)v23 + 4) = 7;
      }
      return v87;
    case 0x17u:
      v25 = &dword_3004B20[10 * v1];
      *((_WORD *)v25 + 5) = 0;
      if ( *(_BYTE *)(28 * v2 + 0x2019273) == 255 )
      {
        if ( *(_BYTE *)(28 * v2 + 0x2019274) == 255 )
        {
          *((_WORD *)v25 + 4) = 48;
        }
        else
        {
          v26 = 0;
          if ( !v2 || v2019273 == 255 )
          {
            do
              ++v26;
            while ( v26 <= 3 && (v26 == v2 || *(_BYTE *)(28 * v26 + 0x2019273) == 255) );
          }
          if ( v26 == 4 )
          {
            sub_80B146C(v2, *(_BYTE *)(28 * v2 + 0x2019274));
            *(_BYTE *)(28 * v2 + 0x2019274) = -1;
            LOWORD(dword_3004B20[10 * v1 + 2]) = 24;
          }
          else
          {
            LOWORD(dword_3004B20[10 * v1 + 2]) = 48;
          }
        }
      }
      else
      {
        sub_80B146C(v2, *(_BYTE *)(28 * v2 + 0x2019273));
        *(_BYTE *)(28 * v2 + 0x2019273) = -1;
        *((_WORD *)v25 + 4) = 24;
      }
      return v87;
    case 0x18u:
      if ( sub_80037A0(33745160) << 24 )
      {
        v21 = dword_3004B20;
        v22 = 4 * v1;
_080AC8E2:
        LOWORD(v21[2 * (v22 + v1) + 2]) = 23;
      }
      return v87;
    case 0x30u:
      v27 = *(_BYTE *)(28 * v2019215 + 0x2019271) & 3;
      if ( v27 == 1 )
      {
        sub_80B1710(5);
      }
      else if ( v27 == 2 )
      {
        sub_80B1710(6);
      }
      else
      {
        if ( v27 != 3 )
        {
          v28 = 4 * v1;
          goto _080AC95E;
        }
        sub_80B1710(7);
      }
      LOWORD(dword_3004B20[10 * v1 + 2]) = 49;
      return v87;
    case 0x31u:
      if ( !(v201920A & 0x10) )
      {
        v28 = 4 * v1;
_080AC95E:
        LOWORD(dword_3004B20[2 * (v28 + v1) + 2]) = 47;
      }
      return v87;
    case 0x2Fu:
      sub_80B1FD0(1);
      LOWORD(dword_3004B20[10 * v1 + 2]) = 12;
      return v87;
    case 0xCu:
      sub_80AFBA0(0, *(_WORD *)(28 * v2019215 + 0x2019262), v2019215);
      LOWORD(dword_3004B20[10 * v1 + 2]) = 13;
      return v87;
    case 0xDu:
      if ( !(*(_BYTE *)(4 * v2019215 + 0x201933A) & 4) )
        LOWORD(dword_3004B20[10 * v1 + 2]) = 35;
      return v87;
    case 0x23u:
      if ( (*(_BYTE *)(28 * v2019215 + 0x2019270) & 0x30) == 16 )
        sub_80B1710(8);
      LOWORD(dword_3004B20[10 * v1 + 2]) = 36;
      return v87;
    case 0x24u:
      if ( !(v201920A & 0x10) )
        LOWORD(dword_3004B20[10 * v1 + 2]) = 37;
      return v87;
    case 0x25u:
      if ( !(sub_80AEE54(v2019215, 1) << 24) )
      {
        v30 = &dword_3004B20[10 * v1];
        goto _080ACAA6;
      }
      v29 = &dword_3004B20[10 * v1];
      *((_WORD *)v29 + 14) = 0;
      *((_WORD *)v29 + 4) = 38;
      return v87;
    case 0x26u:
      v30 = &dword_3004B20[10 * v1];
      v31 = *((_WORD *)v30 + 14) + 1;
      *((_WORD *)v30 + 14) = v31;
      if ( v31 > 20 )
      {
        *((_WORD *)v30 + 14) = 0;
_080ACAA6:
        *((_WORD *)v30 + 4) = 50;
      }
      return v87;
    case 0x32u:
      if ( sub_80AF038(v2019215) << 24 )
        audio_play(0x63u);
      LOWORD(dword_3004B20[10 * v1 + 2]) = 25;
      return v87;
    case 0x19u:
      v32 = &dword_3004B20[10 * v1];
      *((_WORD *)v32 + 5) = 0;
      *((_WORD *)v32 + 4) = 26;
      return v87;
    case 0x1Au:
      v33 = 0;
      LOBYTE(v34) = 0;
      v35 = HIWORD(dword_3004B20[10 * v1 + 2]);
      if ( v35 <= 3 )
      {
        do
        {
          v34 = 0;
          v33 = 0;
          if ( v2019215 )
          {
            if ( v2038696 == v35 && v2019273 != 255 )
              goto _080ACB60;
          }
          while ( ++v33 <= 3 )
          {
            if ( v33 != v2019215 && *(_BYTE *)(v33 + 33785494) == v35 && *(_BYTE *)(28 * v33 + 0x2019273) != 255 )
            {
              v34 = 1;
              break;
            }
          }
          if ( v34 )
            goto _080ACB60;
        }
        while ( ++v35 <= 3 );
      }
      if ( (_BYTE)v34 )
      {
_080ACB60:
        v36 = &dword_3004B20[10 * v1];
        *((_WORD *)v36 + 5) = *(_BYTE *)(v33 + 33785494);
        v37 = 28 * v33 + 33657440;
        sub_80B146C((unsigned __int8)v33, *(_BYTE *)(28 * v33 + 0x2019273));
        *(_BYTE *)(v37 + 19) = -1;
        *((_WORD *)v36 + 4) = 27;
        return v87;
      }
      v38 = &dword_3004B20[10 * v1];
      *((_WORD *)v38 + 5) = 0;
      *((_WORD *)v38 + 14) = 0;
      *((_WORD *)v38 + 4) = 51;
      sub_80AF120();
      return v87;
    case 0x1Bu:
      if ( sub_80037A0(33745160) << 24 )
        LOWORD(dword_3004B20[10 * v1 + 2]) = 28;
      return v87;
    case 0x1Cu:
      v39 = 0;
      if ( HIWORD(dword_3004B20[10 * v1 + 2]) != v2038696 )
      {
        do
          ++v39;
        while ( HIWORD(dword_3004B20[10 * v1 + 2]) != *(_BYTE *)(v39 + 33785494) );
      }
      sub_80AFBA0(
        (signed __int16)(*(_WORD *)(28 * v39 + 0x2019262) + *(_BYTE *)(28 * v39 + 0x201926E)),
        -*(_BYTE *)(28 * v39 + 0x201926E),
        (unsigned __int8)v39);
      LOWORD(dword_3004B20[10 * v1 + 2]) = 29;
      return v87;
    case 0x1Du:
      v40 = 0;
      v41 = HIWORD(dword_3004B20[10 * v1 + 2]);
      if ( v41 != v2038696 )
      {
        do
          ++v40;
        while ( v41 != *(_BYTE *)(v40 + 33785494) );
      }
      if ( !(*(_BYTE *)(4 * v40 + 0x201933A) & 4) )
        LOWORD(dword_3004B20[10 * v1 + 2]) = 39;
      return v87;
    case 0x27u:
      v42 = 0;
      if ( HIWORD(dword_3004B20[10 * v1 + 2]) != v2038696 )
      {
        do
          ++v42;
        while ( HIWORD(dword_3004B20[10 * v1 + 2]) != *(_BYTE *)(v42 + 33785494) );
      }
      if ( !(sub_80AEE54((unsigned __int8)v42, 1) << 24) )
      {
        v44 = &dword_3004B20[10 * v1];
        goto _080ACD22;
      }
      v43 = &dword_3004B20[10 * v1];
      *((_WORD *)v43 + 14) = 0;
      *((_WORD *)v43 + 4) = 40;
      return v87;
    case 0x28u:
      v44 = &dword_3004B20[10 * v1];
      v45 = *((_WORD *)v44 + 14) + 1;
      *((_WORD *)v44 + 14) = v45;
      if ( v45 > 20 )
      {
        *((_WORD *)v44 + 14) = 0;
_080ACD22:
        *((_WORD *)v44 + 4) = 30;
      }
      return v87;
    case 0x1Eu:
      v46 = 0;
      if ( v2038696 != HIWORD(dword_3004B20[10 * v1 + 2]) )
      {
        do
          ++v46;
        while ( v46 <= 3 && *(_BYTE *)(v46 + 33785494) != HIWORD(dword_3004B20[10 * v1 + 2]) );
      }
      if ( sub_80AF038((unsigned __int8)v46) << 24 )
        audio_play(0x63u);
      else
        audio_play(0x64u);
      if ( *(_BYTE *)(28 * v46 + 0x2019275) & 0x20 )
      {
        sub_80B03A8((unsigned __int8)v46);
        *(_BYTE *)(28 * v46 + 0x2019275) &= 0xDFu;
      }
      v47 = &dword_3004B20[10 * v1];
      ++*((_WORD *)v47 + 5);
      *((_WORD *)v47 + 4) = 26;
      return v87;
    case 0x33u:
      v48 = &dword_3004B20[10 * v1];
      v49 = *((_WORD *)v48 + 14);
      *((_WORD *)v48 + 14) = v49 + 1;
      if ( v49 > 9 )
      {
        *((_WORD *)v48 + 14) = 0;
        v50 = *(_BYTE *)(28 * v2 + 0x201926C) & 6;
        if ( *(_BYTE *)(28 * v2 + 0x201926C) & 6 || (v50 = *(_BYTE *)(28 * v2 + 0x2019271) & 4) != 0 )
        {
          sub_80AF138(v50);
          StringCopy(&gStringVar1, (_BYTE *)((v2 << 6) + 33785202));
          StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_083CC103);
          sub_8002EB0(33745160, (int)&gStringVar4, 776, 1, 0xFu);
        }
        LOWORD(dword_3004B20[10 * v1 + 2]) = 52;
      }
      return v87;
    case 0x34u:
      if ( sub_80037A0(33745160) << 24 )
      {
        if ( *(_BYTE *)(28 * v2 + 0x2019275) & 0x40 )
          LOWORD(dword_3004B20[10 * v1 + 2]) = 14;
        else
          LOWORD(dword_3004B20[10 * v1 + 2]) = 17;
      }
      return v87;
    case 0xEu:
      v51 = 28 * v2019215 + 33657440;
      v52 = *(_BYTE *)(28 * v2019215 + 0x2019276) << 24;
      if ( *(_BYTE *)(28 * v2019215 + 0x2019276) )
      {
        sub_80AF138(v51);
        if ( v52 >> 24 == 1 )
        {
          v53 = &gUnknown_083CBD79;
        }
        else
        {
          if ( v52 >> 24 != 2 )
          {
            sub_8002EB0(33745160, (int)&gUnknown_083CBDC6, 776, 1, 0xFu);
            goto _080ACF22;
          }
          v53 = &gUnknown_083CBD9D;
        }
        sub_8002EB0(33745160, (int)v53, 776, 1, 0xFu);
_080ACF22:
        sub_80B1710(3);
        v54 = &dword_3004B20[10 * v1];
        *((_WORD *)v54 + 14) = 0;
        goto _080ACF88;
      }
      sub_80AF138(v51);
      StringCopy(&gStringVar1, (_BYTE *)((v2 << 6) + 33785202));
      StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_083CBD52);
      sub_8002EB0(33745160, (int)&gStringVar4, 776, 1, 0xFu);
      sub_80B1710(2);
      v54 = &dword_3004B20[10 * v1];
      *((_WORD *)v54 + 14) = 0;
_080ACF88:
      *((_WORD *)v54 + 4) = 45;
      return v87;
    case 0x2Du:
      if ( !(v201920A & 0x10) )
      {
        sub_80B09B0(v2019215);
        LOWORD(dword_3004B20[10 * v1 + 2]) = 15;
      }
      return v87;
    case 0xFu:
      if ( sub_80037A0(33745160) << 24 )
      {
        v55 = &dword_3004B20[10 * v1];
        v56 = *((_WORD *)v55 + 14) + 1;
        *((_WORD *)v55 + 14) = v56;
        if ( v56 > 50 )
        {
          if ( !(*(_BYTE *)(28 * v2 + 0x2019275) & 0x10) )
          {
            sub_80AFBA0(*(_WORD *)(28 * v2 + 0x2019262), *(_BYTE *)(28 * v2 + 0x2019277), v2);
            *(_WORD *)(28 * v2 + 0x2019262) += *(_BYTE *)(28 * v2 + 0x2019277);
          }
          *((_WORD *)v55 + 4) = 16;
        }
      }
      return v87;
    case 0x10u:
      if ( !(*(_BYTE *)(4 * v2019215 + 0x201933A) & 4) )
      {
        v57 = &dword_3004B20[10 * v1];
        *((_WORD *)v57 + 14) = 0;
        *((_WORD *)v57 + 4) = 17;
      }
      return v87;
    case 0x11u:
      if ( *(_BYTE *)(28 * v2019215 + 0x2019275) & 1 )
      {
        sub_80AF138(*(_BYTE *)(28 * v2019215 + 0x2019275) & 1);
        StringCopy(&gStringVar1, (_BYTE *)((v2 << 6) + 33785202));
        StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_083CC075);
        sub_8002EB0(33745160, (int)&gStringVar4, 776, 1, 0xFu);
        v58 = &dword_3004B20[10 * v1];
        *((_WORD *)v58 + 14) = 0;
        ((void (*)(void))sub_80B1710)();
        *((_WORD *)v58 + 4) = 46;
      }
      else
      {
        LOWORD(dword_3004B20[10 * v1 + 2]) = 41;
      }
      return v87;
    case 0x2Eu:
      if ( !(v201920A & 0x10) )
        LOWORD(dword_3004B20[10 * v1 + 2]) = 19;
      return v87;
    case 0x13u:
      if ( sub_80037A0(33745160) << 24 )
      {
        sub_80AFBA0(*(_WORD *)(28 * v2 + 0x2019262), -*(_BYTE *)(28 * v2 + 0x2019278), v2);
        *(_WORD *)(28 * v2 + 0x2019262) -= *(_BYTE *)(28 * v2 + 0x2019278);
        LOWORD(dword_3004B20[10 * v1 + 2]) = 18;
      }
      return v87;
    case 0x12u:
      sub_80B0D7C();
      if ( !(*(_BYTE *)(4 * v2 + 0x201933A) & 4) )
      {
        v59 = &dword_3004B20[10 * v1];
        *((_WORD *)v59 + 14) = 0;
        sub_80AF138(dword_3004B20);
        *((_WORD *)v59 + 4) = 41;
      }
      return v87;
    case 0x29u:
      if ( v2019329 & 1 && v2019215 != v2019328 << 20 >> 29 )
      {
        LOWORD(dword_3004B20[10 * v1 + 2]) = 57;
      }
      else
      {
        v60 = v2019328;
        if ( *(_BYTE *)(28 * v2019215 + 0x2019271) & 0x10 )
        {
          v60 = 1;
          StringCopy(&gStringVar3, &gMoveNames[13 * *(_WORD *)(28 * v2019215 + 0x2019266)]);
        }
        else
        {
          StringCopy(
            &gStringVar3,
            *(void **)((char *)&gUnknown_083CC2D8
                     + (4 * gContestMoves[8 * *(_WORD *)(28 * v2019215 + 0x2019266) + 1] & 0x1F)));
        }
        v61 = v60 << 24;
        if ( v60 << 24 > 0 )
        {
          v61 = *(_BYTE *)(28 * v2 + 0x2019275) & 1;
          if ( *(_BYTE *)(28 * v2 + 0x2019275) & 1 )
            v60 = 0;
        }
        sub_80AF138(v61);
        StringCopy(&gStringVar1, (_BYTE *)((v2 << 6) + 33785202));
        v62 = (char)v60;
        v2019217 += v60;
        v63 = v60 << 24;
        if ( v2019217 & 0x80 )
          v2019217 = 0;
        if ( !v62 )
        {
          v64 = dword_3004B20;
          v65 = 4 * v1;
          goto _080AD6EC;
        }
        if ( v62 >= 0 )
        {
          if ( v62 <= 0 || v2019217 > 4 )
            StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_083CC0E3);
          else
            StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_083CC0A0);
        }
        else
        {
          StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_083CC0BC);
        }
        sub_8002EB0(33745160, (int)&gStringVar4, 776, 1, 0xFu);
        v66 = &dword_3004B20[10 * v1];
        *((_WORD *)v66 + 14) = 0;
        *((_WORD *)v66 + 15) = 0;
        if ( v63 >= 0 )
          *((_WORD *)v66 + 4) = 54;
        else
          *((_WORD *)v66 + 4) = 53;
      }
      return v87;
    case 0x35u:
      v67 = &dword_3004B20[10 * v1];
      v68 = *((_WORD *)v67 + 14);
      if ( v68 == 1 )
      {
        if ( v201920B & 1 || !(sub_80037A0(33745160) << 24) )
          return v87;
        sub_80B1CBC(-1);
_080AD3A8:
        ++*((_WORD *)v67 + 14);
        return v87;
      }
      if ( v68 <= 1 )
      {
        if ( *((_WORD *)v67 + 14) )
          return v87;
        sub_80B1EA8(-1, 1);
        fanfare_play(0x187u);
        goto _080AD3A8;
      }
      if ( v68 == 2 )
      {
        if ( v201920A & 0x20 )
          return v87;
        v69 = *((_WORD *)v67 + 15);
        *((_WORD *)v67 + 15) = v69 + 1;
        if ( v69 <= 29 )
          return v87;
        *((_WORD *)v67 + 15) = 0;
        sub_80B1EA8(-1, -1);
        goto _080AD3A8;
      }
      if ( v68 == 3 && !(v202F38F & 0x80) )
      {
        *((_WORD *)v67 + 14) = 0;
        *((_WORD *)v67 + 15) = 0;
        *((_WORD *)v67 + 4) = 43;
      }
      return v87;
    case 0x36u:
      v70 = LOWORD(dword_3004B20[10 * v1 + 7]);
      if ( v70 <= 4 )
      {
        switch ( v70 )
        {
          case 0u:
            if ( sub_80037A0(33745160) << 24 )
            {
              v71 = 1;
              goto _080AD4C8;
            }
            break;
          case 1u:
            if ( !(v201920B & 1) )
            {
              sub_80B1DDC();
              audio_play(0xDFu);
              sub_80B1CBC(1);
              goto _080AD4CC;
            }
            break;
          case 2u:
            if ( !(v201920A & 0x20) )
            {
              v72 = &dword_3004B20[10 * v1];
              v73 = *((_WORD *)v72 + 15);
              *((_WORD *)v72 + 15) = v73 + 1;
              if ( v73 > 29 )
              {
                *((_WORD *)v72 + 15) = 0;
                sub_80AFBA0(*(_WORD *)(28 * v2 + 0x2019262), v201932A, v2);
                *(_WORD *)(28 * v2 + 0x2019262) += v201932A;
                ++LOWORD(dword_3004B20[10 * v1 + 7]);
              }
            }
            break;
          case 3u:
            if ( !(*(_BYTE *)(4 * v2019215 + 0x201933A) & 4) && !(v201920A & 0x80) )
            {
              v71 = -1;
_080AD4C8:
              sub_80B1EA8(1, v71);
_080AD4CC:
              ++LOWORD(dword_3004B20[10 * v1 + 7]);
            }
            break;
          case 4u:
            if ( !(v202F38F & 0x80) )
            {
              v74 = &dword_3004B20[10 * v1];
              *((_WORD *)v74 + 14) = 0;
              *((_WORD *)v74 + 15) = 0;
              *((_WORD *)v74 + 4) = 43;
            }
            break;
          default:
            return v87;
        }
      }
      return v87;
    case 0x2Bu:
      if ( !(*(_BYTE *)(4 * v2019215 + 0x201933A) & 4) )
      {
        sub_80AF138(0);
        v64 = dword_3004B20;
        v65 = 4 * v1;
        goto _080AD6EC;
      }
      return v87;
    case 0x39u:
      sub_80AF138(v3);
      StringCopy(&gStringVar3, (_BYTE *)((v2019328 << 20 >> 29 << 6) + 33785202));
      StringCopy(&gStringVar1, (_BYTE *)((v2 << 6) + 33785202));
      StringCopy(&gStringVar2, &gMoveNames[13 * *(_WORD *)(28 * v2 + 0x2019266)]);
      StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_083CC14A);
      sub_8002EB0(33745160, (int)&gStringVar4, 776, 1, 0xFu);
      LOWORD(dword_3004B20[10 * v1 + 2]) = 58;
      return v87;
    case 0x3Au:
      v75 = sub_80037A0(33745160) << 24;
      if ( v75 )
      {
        sub_80AF138(v75);
        StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_083CC16E);
        sub_8002EB0(33745160, (int)&gStringVar4, 776, 1, 0xFu);
        LOWORD(dword_3004B20[10 * v1 + 2]) = 59;
      }
      return v87;
    case 0x3Bu:
      v76 = sub_80037A0(33745160) << 24;
      if ( v76 )
      {
        sub_80AF138(v76);
        v64 = dword_3004B20;
        v65 = 4 * v1;
        goto _080AD6EC;
      }
      return v87;
    case 0x21u:
      if ( *(_BYTE *)(28 * v2019215 + 0x2019275) & 0x10 )
        *(_BYTE *)(28 * v2019215 + 0x2019275) &= 0xEFu;
      sub_80B09B0(v2);
      StringCopy(&gStringVar1, (_BYTE *)((v2 << 6) + 33785202));
      StringCopy(&gStringVar2, &gMoveNames[13 * *(_WORD *)(28 * v2 + 0x2019266)]);
      StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_083CBF60);
      sub_8002EB0(33745160, (int)&gStringVar4, 776, 1, 0xFu);
      LOWORD(dword_3004B20[10 * v1 + 2]) = 34;
      return v87;
    case 0x22u:
      if ( sub_80037A0(33745160) << 24 )
      {
        v64 = dword_3004B20;
        v65 = 4 * v1;
_080AD6EC:
        LOWORD(v64[2 * (v65 + v1) + 2]) = 55;
      }
      return v87;
    case 0x37u:
      sub_80B1BDC();
      LOWORD(dword_3004B20[10 * v1 + 2]) = 56;
      return v87;
    case 0x38u:
      if ( !(v201920A & 0x40) )
      {
        if ( v2019217 > 4 )
        {
          v2019217 = v201920A & 0x40;
          sub_80B1928();
        }
        LOWORD(dword_3004B20[10 * v1 + 2]) = 10;
      }
      return v87;
    case 0xAu:
      v77 = &dword_3004B20[10 * v1];
      dword_2020020[17 * *((_BYTE *)v77 + 12)] = (int)sub_80AD92C;
      *((_WORD *)v77 + 4) = 11;
      return v87;
    case 0xBu:
      v78 = &dword_3004B20[10 * v1];
      v79 = &gSprites[68 * *((_BYTE *)v78 + 12)];
      if ( v79[62] & 4 )
      {
        FreeSpriteOamMatrix((int)&gSprites[68 * *((_BYTE *)v78 + 12)]);
        DestroySprite((int)v79);
        *((_WORD *)v78 + 4) = 20;
      }
      return v87;
    case 0x14u:
      v80 = 0;
      v81 = 4 * v1;
      do
        sub_80B0CDC((unsigned __int8)v80++, 1, v81);
      while ( v80 <= 3 );
      v82 = &dword_3004B20[10 * v1];
      *((_WORD *)v82 + 14) = 0;
      *((_WORD *)v82 + 4) = 21;
      return v87;
    case 0x1Fu:
      sub_80AF138(v3);
      StringCopy(&gStringVar1, (_BYTE *)((v2 << 6) + 33785202));
      StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_083CB00D);
      sub_8002EB0(33745160, (int)&gStringVar4, 776, 1, 0xFu);
      LOWORD(dword_3004B20[10 * v1 + 2]) = 32;
      return v87;
    case 0x20u:
      if ( sub_80037A0(33745160) << 24 )
        LOWORD(dword_3004B20[10 * v1 + 2]) = 21;
      return v87;
    case 0x15u:
      v83 = &dword_3004B20[10 * v1];
      v84 = *((_WORD *)v83 + 14) + 1;
      *((_WORD *)v83 + 14) = v84;
      if ( v84 > 29 )
      {
        *((_WORD *)v83 + 14) = 0;
        *((_WORD *)v83 + 4) = 22;
      }
      return v87;
    case 0x16u:
      ++v2019214;
      if ( v2019214 == 4 )
      {
        v85 = &dword_3004B20[10 * v1];
        *((_WORD *)v85 + 4) = 0;
        *((_WORD *)v85 + 5) = 0;
        *((_WORD *)v85 + 6) = 0;
        *v85 = (int)sub_80AD960;
      }
      else
      {
        LOWORD(dword_3004B20[10 * v1 + 2]) = 0;
      }
      nullsub_18(0);
      return v87;
    default:
      return v87;
  }
}
