int __fastcall sub_80E03BC(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int *v2; // r5@1
  unsigned int v3; // r0@1
  int v4; // r0@5
  __int16 *v5; // r1@6
  __int16 v6; // r0@13
  __int16 v7; // r0@13
  signed __int16 v8; // r0@14
  __int16 v9; // r0@16
  signed int v10; // r0@18
  unsigned int v11; // r3@20
  signed __int16 v12; // r2@25
  int v14; // [sp+0h] [bp-2Ch]@10
  unsigned __int8 v15; // [sp+8h] [bp-24h]@10
  int v16; // [sp+Ch] [bp-20h]@20
  signed int v17; // [sp+10h] [bp-1Ch]@22
  char v18; // [sp+14h] [bp-18h]@22
  char v19; // [sp+15h] [bp-17h]@22
  int v20; // [sp+28h] [bp-4h]@28

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 <= 4 )
  {
    switch ( v3 )
    {
      case 0u:
        if ( (unsigned __int8)sub_8076BE0() != 1 )
        {
          v4 = (unsigned __int8)battle_get_per_side_status_permutated(v202F7C9);
          *((_WORD *)v2 + 7) = v4;
          if ( v4 == 1 )
          {
            v4000050 = 16194;
            v5 = &word_3004288;
          }
          else
          {
            v4000050 = 16196;
            v5 = &word_30042C0;
          }
          *v5 += 240;
          goto _080E0590;
        }
        word_30042C4 = 0;
        word_3004240 = 0;
        v4000048 = 16191;
        v400004A = 16191;
        move_anim_task_del(v1);
        return v20;
      case 1u:
        if ( *((_WORD *)v2 + 7) == 1 )
        {
          sub_8078914((int)&v14);
          *((_WORD *)v2 + 14) = word_30041B4;
          FillPalette(0, 16 * v15, 32);
        }
        else
        {
          *((_WORD *)v2 + 14) = word_3004280;
          FillPalette(0, 144, 32);
        }
        sub_80E08CC(3);
        goto _080E0590;
      case 2u:
        *((_WORD *)v2 + 11) = (unsigned __int8)sub_8077ABC(v202F7C9, 1u) + 31;
        v6 = sub_807A100(v202F7C9, 2u) - 7;
        *((_WORD *)v2 + 10) = v6;
        *((_WORD *)v2 + 17) = (*((_WORD *)v2 + 11) - v6) << 8;
        v7 = (unsigned __int8)sub_8077ABC(v202F7C9, 0);
        *((_WORD *)v2 + 18) = v7 - 4;
        *((_WORD *)v2 + 19) = v7 + 4;
        if ( battle_side_get_owner(v202F7C9) << 24 )
          v8 = -64;
        else
          v8 = -12;
        *((_WORD *)v2 + 12) = v8;
        v9 = *((_WORD *)v2 + 12);
        *((_WORD *)v2 + 8) = v9;
        *((_WORD *)v2 + 9) = v9;
        *((_WORD *)v2 + 15) = 12;
        *((_WORD *)v2 + 16) = 8;
        goto _080E0590;
      case 3u:
        if ( *((_WORD *)v2 + 7) == 1 )
          v10 = 67108886;
        else
          v10 = 67108890;
        v16 = v10;
        v11 = 0;
        do
        {
          word_3004DE0[v11] = *((_WORD *)v2 + 14) + 159 - v11;
          word_3005560[v11] = *((_WORD *)v2 + 14) + 159 - v11;
          v11 = (v11 + 1) & 0xFFFF;
        }
        while ( v11 <= 0x6F );
        v17 = -1570766847;
        v18 = 1;
        v19 = 0;
        sub_80895F8(v16, -1570766847, 1);
_080E0590:
        ++*((_WORD *)v2 + 4);
        break;
      case 4u:
        if ( *((_WORD *)v2 + 7) == 1 )
          v12 = 16189;
        else
          v12 = 16187;
        v400004A = v12;
        v4000048 = 16191;
        word_30042C4 = (*((_WORD *)v2 + 18) << 8) | *((_WORD *)v2 + 19);
        word_3004240 = 160;
        *((_WORD *)v2 + 4) = 0;
        *((_WORD *)v2 + 5) = 0;
        *((_WORD *)v2 + 6) = 0;
        v4000052 = 2060;
        *v2 = (int)sub_80E0620;
        break;
      default:
        return v20;
    }
  }
  return v20;
}
