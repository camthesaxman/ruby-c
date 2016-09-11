int __fastcall sub_8130FE0(int a1)
{
  int v1; // r4@1
  unsigned int v2; // r0@1
  unsigned int v3; // r0@3
  int v4; // r5@6
  __int16 v5; // r0@6
  unsigned __int8 v6; // r1@6
  int v7; // r0@7
  int v8; // r1@11
  int v9; // r0@13
  signed __int16 v10; // r0@14
  int v11; // r0@20
  __int16 v12; // r0@26
  __int16 v13; // r0@31
  int v15; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 56);
  if ( v2 <= 4 )
  {
    switch ( v2 )
    {
      case 0u:
        v3 = *(_WORD *)(v1 + 58);
        if ( v3 <= 5 )
        {
          switch ( v3 )
          {
            case 0u:
            case 4u:
              goto _08131044;
            case 1u:
              v4 = (sub_807A100(*(_BYTE *)(v1 + 60), 5u) - 4) & 0xFFFF;
              v7 = sub_807A100(*(_BYTE *)(v1 + 60), 2u) + 4;
              goto _081310BE;
            case 2u:
              v4 = (sub_807A100(*(_BYTE *)(v1 + 60), 4u) + 4) & 0xFFFF;
              v5 = *(_WORD *)(v1 + 60) & 0xFF;
              v6 = 3;
              goto _081310B8;
            case 3u:
              v4 = (sub_807A100(*(_BYTE *)(v1 + 60), 4u) + 4) & 0xFFFF;
              v5 = *(_WORD *)(v1 + 60) & 0xFF;
              v6 = 2;
              goto _081310B8;
            case 5u:
              LOWORD(v4) = (unsigned __int8)sub_8077ABC(*(_BYTE *)(v1 + 60), 2u);
              v8 = sub_8077ABC(*(_BYTE *)(v1 + 60), 3u) & 0xFF;
              goto _081310E4;
            default:
              break;
          }
        }
        *(_WORD *)(v1 + 58) = 0;
_08131044:
        v4 = (sub_807A100(*(_BYTE *)(v1 + 60), 5u) - 4) & 0xFFFF;
        v5 = *(_WORD *)(v1 + 60) & 0xFF;
        v6 = 3;
_081310B8:
        v7 = sub_807A100(v5, v6) - 4;
_081310BE:
        LOWORD(v8) = v7;
_081310E4:
        v9 = *(_WORD *)(v1 + 58);
        if ( v9 == 4 )
        {
          v10 = 24;
        }
        else if ( v9 == 5 )
        {
          v10 = 6;
        }
        else
        {
          v10 = 12;
        }
        *(_WORD *)(v1 + 46) = v10;
        *(_WORD *)(v1 + 48) = *(_WORD *)(v1 + 32);
        *(_WORD *)(v1 + 50) = v4;
        *(_WORD *)(v1 + 52) = *(_WORD *)(v1 + 34);
        *(_WORD *)(v1 + 54) = v8;
        obj_translate_based_on_private_1_2_3_4(v1);
        goto _081311CA;
      case 1u:
        if ( !(sub_8078B5C(v1) << 24) )
          return v15;
        v11 = *(_WORD *)(v1 + 58);
        if ( v11 == 4 )
        {
          *(_WORD *)(v1 + 32) += *(_WORD *)(v1 + 36);
          *(_WORD *)(v1 + 34) += *(_WORD *)(v1 + 38);
          *(_WORD *)(v1 + 38) = 0;
          *(_WORD *)(v1 + 36) = 0;
          *(_WORD *)(v1 + 56) = 0;
          goto _08131160;
        }
        if ( v11 != 5 )
        {
          *(_WORD *)(v1 + 32) += *(_WORD *)(v1 + 36);
          *(_WORD *)(v1 + 34) += *(_WORD *)(v1 + 38);
          *(_WORD *)(v1 + 38) = 0;
          *(_WORD *)(v1 + 36) = 0;
          *(_WORD *)(v1 + 46) = 0;
          ++*(_WORD *)(v1 + 56);
_08131160:
          ++*(_WORD *)(v1 + 58);
          return v15;
        }
        *(_WORD *)(v1 + 46) = 0;
        *(_WORD *)(v1 + 48) = 16;
        *(_WORD *)(v1 + 50) = 0;
        *(_WORD *)(v1 + 56) = 3;
        break;
      case 2u:
        v12 = *(_WORD *)(v1 + 46) + 1;
        *(_WORD *)(v1 + 46) = v12;
        if ( v12 == 4 )
          *(_WORD *)(v1 + 56) = 0;
        return v15;
      case 3u:
        if ( *(_WORD *)(v1 + 46) & 1 )
          ++*(_WORD *)(v1 + 50);
        else
          --*(_WORD *)(v1 + 48);
        v4000052 = (*(_WORD *)(v1 + 50) << 8) | *(_WORD *)(v1 + 48);
        v13 = *(_WORD *)(v1 + 46) + 1;
        *(_WORD *)(v1 + 46) = v13;
        if ( v13 == 32 )
        {
          *(_BYTE *)(v1 + 62) |= 4u;
_081311CA:
          ++*(_WORD *)(v1 + 56);
        }
        return v15;
      case 4u:
        move_anim_8072740(v1);
        return v15;
      default:
        return v15;
    }
  }
  return v15;
}
