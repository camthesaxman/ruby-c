int __fastcall sub_8120FFC(_BYTE *a1, int a2)
{
  _BYTE *v2; // r9@1
  int v3; // r8@1
  int v4; // r6@1
  char *v5; // r4@1
  int v6; // r7@1
  int i; // r1@1
  _BYTE *v8; // r9@4
  unsigned int v9; // r0@4
  char *v10; // r0@7
  char *v11; // r1@10
  char *v12; // r0@17
  const char *v13; // r4@26
  char v14; // r0@30
  char v15; // r0@31
  int v16; // r1@31
  char v17; // r0@33
  char v18; // r0@34
  int v19; // r0@34
  unsigned int *v20; // r1@34
  const char *v21; // r4@36
  char v22; // r1@38
  char *j; // r12@38
  int v24; // r1@40
  const char *v25; // r4@43
  char v26; // r1@45
  const char *v27; // r4@50
  char v28; // r1@52
  const char *v29; // r4@57
  char v30; // r1@59
  const char *v31; // r4@64
  char v32; // r1@66
  int v33; // r1@71
  int v34; // r0@81
  _BYTE *v35; // r0@84
  _BYTE *v36; // r0@85
  signed int v37; // r0@92
  signed int v38; // r1@92
  char *v39; // r4@107
  __int16 v40; // r1@107
  signed __int16 v41; // r0@107
  const char *v42; // r4@115
  char v43; // r1@117
  unsigned __int8 *v44; // r0@128
  unsigned __int8 *v45; // r0@132
  unsigned __int8 *v46; // r0@136
  char v47; // r1@140
  char v48; // r2@140
  int v49; // r6@143
  _BYTE *k; // r3@3
  int v52; // [sp+0h] [bp-28h]@79

  v2 = a1;
  v3 = a2;
  v4 = 0;
  v5 = 0;
  v6 = GetMultiplayerId() & 0xFF;
  for ( i = *v2; i != 255; i = *k )
  {
    if ( i == 253 )
    {
      v8 = v2 + 1;
      v9 = *v8;
      if ( v9 <= 0x2A )
      {
        switch ( v9 )
        {
          case 0u:
            if ( (unsigned __int8)byte_30041C0[0] == 253 )
            {
              v5 = &gStringVar1;
              v10 = byte_30041C0;
              goto _08121140;
            }
            v5 = (char *)sub_8120F98(byte_30041C0);
            if ( !v5 )
              v5 = byte_30041C0;
            break;
          case 1u:
            v11 = byte_3004290;
            if ( (unsigned __int8)byte_3004290[0] != 253 )
              goto _08121154;
            v5 = gStringVar2;
            goto _0812113E;
          case 0x2Au:
            v11 = byte_30042B0;
            if ( (unsigned __int8)byte_30042B0[0] == 253 )
            {
              v5 = (char *)&gStringVar3;
_0812113E:
              v10 = v11;
_08121140:
              sub_8121A68(v10, v5);
            }
            else
            {
_08121154:
              v5 = v11;
            }
            break;
          case 2u:
            v12 = (char *)&dword_3004360[25 * *(_WORD *)((2 * battle_get_side_with_given_state(0) & 0x1FF) + 0x2024A6A)];
            goto _0812190E;
          case 3u:
            v12 = (char *)&unk_30045C0
                + 100 * *(_WORD *)((2 * battle_get_side_with_given_state(1u) & 0x1FF) + 0x2024A6A);
            goto _0812190E;
          case 4u:
            v12 = (char *)&dword_3004360[25 * *(_WORD *)((2 * battle_get_side_with_given_state(2u) & 0x1FF) + 0x2024A6A)];
            goto _0812190E;
          case 5u:
            v12 = (char *)&unk_30045C0
                + 100 * *(_WORD *)((2 * battle_get_side_with_given_state(3u) & 0x1FF) + 0x2024A6A);
            goto _0812190E;
          case 6u:
            v12 = (char *)&dword_3004360[25 * *(_WORD *)(2 * *((_WORD *)&gLinkPlayers + 14 * v6 + 12) + 0x2024A6A)];
            goto _0812190E;
          case 7u:
            v12 = (char *)&unk_30045C0
                + 100 * *(_WORD *)(2 * (*((_WORD *)&gLinkPlayers + 14 * v6 + 12) ^ 1) + 0x2024A6A);
            goto _0812190E;
          case 8u:
            v12 = (char *)&dword_3004360[25 * *(_WORD *)(2 * (*((_WORD *)&gLinkPlayers + 14 * v6 + 12) ^ 2) + 0x2024A6A)];
            goto _0812190E;
          case 9u:
            v12 = (char *)&unk_30045C0
                + 100 * *(_WORD *)(2 * (*((_WORD *)&gLinkPlayers + 14 * v6 + 12) ^ 3) + 0x2024A6A);
            goto _0812190E;
          case 0xAu:
            if ( !(battle_side_get_owner(v2024C07) << 24) )
            {
              v15 = battle_get_per_side_status(v2024C07);
              v16 = *(_WORD *)((2 * battle_get_side_with_given_state(v15 & 1) & 0x1FF) + 0x2024A6A);
              goto _0812193A;
            }
            v13 = "ÑÝàØ";
            if ( v20239F8 & 8 )
              v13 = (const char *)&gUnknown_08400797;
            while ( *v13 != 255 )
              *(_BYTE *)(v3 + v4++) = *v13++;
            v14 = battle_get_per_side_status(v2024C07);
            v12 = (char *)&unk_30045C0
                + 100 * *(_WORD *)((2 * battle_get_side_with_given_state(v14 & 1) & 0x1FF) + 0x2024A6A);
            goto _0812190E;
          case 0xBu:
            if ( !(battle_side_get_owner(v2024C07) << 24) )
            {
              v17 = battle_get_per_side_status(v2024C07);
              v12 = (char *)&dword_3004360[25
                                         * *(_WORD *)((2 * battle_get_side_with_given_state(v17 & 1) & 0x1FF) + 0x2024A6E)];
              goto _0812190E;
            }
            v18 = battle_get_per_side_status(v2024C07);
            v19 = 25 * *(_WORD *)((2 * battle_get_side_with_given_state(v18 & 1) & 0x1FF) + 0x2024A6E);
            v20 = (unsigned int *)&unk_30045C0;
            goto _08121940;
          case 0xCu:
            if ( !(battle_side_get_owner(v2024C07) << 24) )
            {
              v16 = *(_WORD *)(2 * v2024C07 + 0x2024A6A);
              goto _0812193A;
            }
            v21 = "ÑÝàØ";
            if ( v20239F8 & 8 )
              v21 = (const char *)&gUnknown_08400797;
            v22 = *v21;
            for ( j = (char *)&unk_30045C0; *v21 != 255; v22 = *v21 )
            {
              *(_BYTE *)(v3 + v4++) = v22;
              ++v21;
            }
            v24 = *(_WORD *)(2 * v2024C07 + 0x2024A6A);
            goto _08121908;
          case 0xDu:
            if ( !(battle_side_get_owner(v2024C08) << 24) )
            {
              v16 = *(_WORD *)(2 * v2024C08 + 0x2024A6A);
              goto _0812193A;
            }
            v25 = "ÑÝàØ";
            if ( v20239F8 & 8 )
              v25 = (const char *)&gUnknown_08400797;
            v26 = *v25;
            for ( j = (char *)&unk_30045C0; *v25 != 255; v26 = *v25 )
            {
              *(_BYTE *)(v3 + v4++) = v26;
              ++v25;
            }
            v24 = *(_WORD *)(2 * v2024C08 + 0x2024A6A);
            goto _08121908;
          case 0xEu:
            if ( !(battle_side_get_owner(v2024C0A) << 24) )
            {
              v16 = *(_WORD *)(2 * v2024C0A + 0x2024A6A);
              goto _0812193A;
            }
            v27 = "ÑÝàØ";
            if ( v20239F8 & 8 )
              v27 = (const char *)&gUnknown_08400797;
            v28 = *v27;
            for ( j = (char *)&unk_30045C0; *v27 != 255; v28 = *v27 )
            {
              *(_BYTE *)(v3 + v4++) = v28;
              ++v27;
            }
            v24 = *(_WORD *)(2 * v2024C0A + 0x2024A6A);
            goto _08121908;
          case 0xFu:
            if ( !(battle_side_get_owner(v2024A60) << 24) )
            {
              v16 = *(_WORD *)(2 * v2024A60 + 0x2024A6A);
              goto _0812193A;
            }
            v29 = "ÑÝàØ";
            if ( v20239F8 & 8 )
              v29 = (const char *)&gUnknown_08400797;
            v30 = *v29;
            for ( j = (char *)&unk_30045C0; *v29 != 255; v30 = *v29 )
            {
              *(_BYTE *)(v3 + v4++) = v30;
              ++v29;
            }
            v24 = *(_WORD *)(2 * v2024A60 + 0x2024A6A);
            goto _08121908;
          case 0x10u:
            if ( !(battle_side_get_owner(v2016003) << 24) )
            {
              v16 = *(_WORD *)(2 * v2016003 + 0x2024A6A);
              goto _0812193A;
            }
            v31 = "ÑÝàØ";
            if ( v20239F8 & 8 )
              v31 = (const char *)&gUnknown_08400797;
            v32 = *v31;
            for ( j = (char *)&unk_30045C0; *v31 != 255; v32 = *v31 )
            {
              *(_BYTE *)(v3 + v4++) = v32;
              ++v31;
            }
            v24 = *(_WORD *)(2 * v2016003 + 0x2024A6A);
            goto _08121908;
          case 0x11u:
            if ( (unsigned int)*v2039270 > 0x162 )
              goto _08121634;
            v33 = *v2039270;
            goto _08121652;
          case 0x12u:
            if ( (unsigned int)*(_WORD *)(v2039270 + 2) <= 0x162 )
            {
              v33 = *(_WORD *)(v2039270 + 2);
_08121652:
              v5 = &gMoveNames[13 * v33];
            }
            else
            {
_08121634:
              v5 = (char *)(&gUnknown_08401674 + v20160A0);
            }
            break;
          case 0x13u:
            if ( !(v20239F8 & 2) )
            {
              v34 = v2024C04;
              goto _081216DC;
            }
            if ( v2024C04 != 175 )
            {
              v34 = v2024C04;
_081216DC:
              itemid_copy_name(v34, &v52);
              v5 = (char *)&v52;
              break;
            }
            if ( *((_WORD *)&gLinkPlayers + 14 * v20160CB + 12) == v2024C0B )
            {
              StringCopy(&v52, (_BYTE *)(28 * v2024C0B + 33705456));
              StringAppend(&v52, &gUnknown_08400A85);
              v5 = (char *)&v52;
            }
            else
            {
              v5 = "¿ÈÃÁÇ»";
            }
            break;
          case 0x14u:
            v35 = (_BYTE *)33704966;
            goto _08121734;
          case 0x15u:
            v36 = (_BYTE *)33704967;
            goto _08121730;
          case 0x16u:
            v36 = (_BYTE *)33704968;
            goto _08121730;
          case 0x17u:
            v36 = (_BYTE *)33644547;
            goto _08121730;
          case 0x18u:
            v36 = (_BYTE *)33704970;
_08121730:
            v35 = (_BYTE *)(*v36 + 33788524);
_08121734:
            v5 = (char *)&gAbilityNames + 13 * *v35;
            break;
          case 0x19u:
            if ( v202FF5E == 1024 )
            {
              v37 = (unsigned __int8)sub_803DCE4();
              v38 = 13;
            }
            else if ( v20239F8 & 0x100 )
            {
              v37 = (unsigned __int8)get_trainer_class_name_index();
              v38 = 13;
            }
            else if ( v20239F8 & 0x800 )
            {
              v37 = (unsigned __int8)sub_8135FD8();
              v38 = 13;
            }
            else
            {
              v38 = *((_BYTE *)&gTrainers + 40 * v202FF5E + 1);
              v37 = 13;
            }
            v5 = &gTrainerClassNames[v38 * v37];
            break;
          case 0x1Au:
            if ( v202FF5E == 1024 )
            {
              memset(&v52, 255, 8);
              memcpy(&v52, (const char *)0x2017002, 7);
              v5 = (char *)&v52;
            }
            else if ( v20239F8 & 0x100 )
            {
              get_trainer_name(&v52);
              v5 = (char *)&v52;
            }
            else if ( v20239F8 & 0x800 )
            {
              sub_8135FF4(&v52);
              v5 = (char *)&v52;
            }
            else
            {
              v5 = (char *)&unk_81F0500 + 40 * v202FF5E;
            }
            break;
          case 0x1Bu:
            v5 = &byte_3002978[28 * v6];
            break;
          case 0x1Cu:
            v39 = (char *)&gLinkPlayers;
            v40 = *((_WORD *)&gLinkPlayers + 14 * v6 + 12);
            v41 = 2;
            goto _08121876;
          case 0x1Du:
            v39 = (char *)&gLinkPlayers;
            v40 = *((_WORD *)&gLinkPlayers + 14 * v6 + 12);
            v41 = 1;
            goto _08121876;
          case 0x1Eu:
            v39 = (char *)&gLinkPlayers;
            v40 = *((_WORD *)&gLinkPlayers + 14 * v6 + 12);
            v41 = 3;
_08121876:
            v5 = &v39[28 * sub_803FC34(v41 ^ v40) + 8];
            break;
          case 0x1Fu:
            v5 = &byte_3002978[28 * sub_803FC34(v2016003)];
            break;
          case 0x20u:
            v5 = (char *)33705636;
            break;
          case 0x21u:
            v5 = sub_8082830();
            break;
          case 0x22u:
            if ( battle_side_get_owner(v2016003) << 24 )
            {
              v42 = "ÑÝàØ";
              if ( v20239F8 & 8 )
                v42 = (const char *)&gUnknown_08400797;
              v43 = *v42;
              for ( j = (char *)&unk_30045C0; *v42 != 255; v43 = *v42 )
              {
                *(_BYTE *)(v3 + v4++) = v43;
                ++v42;
              }
              v24 = v201605E;
_08121908:
              v12 = &j[100 * v24];
_0812190E:
              GetMonData((int)v12, 2, (int)&v52);
            }
            else
            {
              v16 = v201605E;
_0812193A:
              v19 = 25 * v16;
              v20 = dword_3004360;
_08121940:
              GetMonData((int)&v20[v19], 2, (int)&v52);
            }
            StringGetEnd10((int)&v52);
            v5 = (char *)&v52;
            break;
          case 0x23u:
            v5 = (char *)&gUnknown_084009ED;
            if ( FlagGet(0x84Bu) << 24 )
              v5 = (char *)&gUnknown_084009F7;
            break;
          case 0x26u:
            v44 = (unsigned __int8 *)33704967;
            goto _08121986;
          case 0x27u:
            v44 = (unsigned __int8 *)33704968;
_08121986:
            v5 = (char *)&gUnknown_084007A7;
            if ( !(battle_side_get_owner(*v44) << 24) )
              v5 = "»ààí";
            break;
          case 0x24u:
            v45 = (unsigned __int8 *)33704967;
            goto _081219AE;
          case 0x25u:
            v45 = (unsigned __int8 *)33704968;
_081219AE:
            v5 = (char *)&gUnknown_0840079C;
            if ( !(battle_side_get_owner(*v45) << 24) )
              v5 = "»ààí";
            break;
          case 0x28u:
            v46 = (unsigned __int8 *)33704967;
            goto _081219D6;
          case 0x29u:
            v46 = (unsigned __int8 *)33704968;
_081219D6:
            v5 = (char *)&gUnknown_084007B2;
            if ( !(battle_side_get_owner(*v46) << 24) )
              v5 = "»ààí";
            break;
          default:
            break;
        }
      }
      v47 = *v5;
      v48 = *v8;
      for ( k = v8 + 1; (unsigned __int8)*v5 != 255; v47 = *v5 )
      {
        *(_BYTE *)(v3 + v4++) = v47;
        ++v5;
      }
      if ( v48 == 33 )
      {
        *(_BYTE *)(v3 + v4) = -4;
        v49 = v4 + 1;
        *(_BYTE *)(v3 + v49) = 9;
        v4 = v49 + 1;
      }
    }
    else
    {
      *(_BYTE *)(v3 + v4++) = i;
      k = v2 + 1;
    }
    v2 = k;
  }
  *(_BYTE *)(v3 + v4) = *v2;
  return v4 + 1;
}
