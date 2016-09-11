signed int __fastcall battle_load_something(_BYTE *a1, unsigned __int8 *a2)
{
  _BYTE *v2; // r5@1
  unsigned __int8 *v3; // r4@1
  signed int v4; // r6@1
  unsigned int v5; // r0@1
  char v6; // r0@8
  int v7; // r1@11
  unsigned __int8 v8; // r0@19
  int v9; // r0@22

  v2 = a1;
  v3 = a2;
  v4 = 0;
  v5 = *a1;
  if ( v5 <= 6 )
  {
    switch ( v5 )
    {
      case 0u:
        sub_8031F0C();
        goto _08031EBC;
      case 1u:
        if ( sub_8031C30(*a2) << 24 )
          goto _08031EB8;
        ++*v3;
        return v4;
      case 3u:
        if ( !(v20239F8 & 0x80) || *a2 )
          v6 = battle_make_oam_normal_battle(*a2);
        else
          v6 = battle_make_oam_safari_battle();
        byte_3004340[*v3] = v6;
        goto _08031EA6;
      case 4u:
        sub_8043F44(*a2);
        v7 = *v3;
        if ( (unsigned int)*(_BYTE *)(v7 + 0x2024A72) > 1 )
          nullsub_11((unsigned __int8)byte_3004340[v7], 1);
        else
          nullsub_11((unsigned __int8)byte_3004340[v7], 0);
        goto _08031EA6;
      case 5u:
        if ( battle_side_get_owner(*a2) << 24 )
        {
          sub_8045A5C(
            (unsigned __int8)byte_3004340[*v3],
            (char *)&unk_30045C0 + 100 * *(_WORD *)(2 * *v3 + 0x2024A6A),
            0);
        }
        else if ( !(v20239F8 & 0x80) )
        {
          sub_8045A5C(
            (unsigned __int8)byte_3004340[*v3],
            (char *)&unk_3004360 + 100 * *(_WORD *)(2 * *v3 + 0x2024A6A),
            0);
        }
        sub_8043DB0((unsigned __int8)byte_3004340[*v3]);
_08031EA6:
        v8 = *v3 + 1;
        *v3 = v8;
        if ( v8 != v2024A68 )
          return v4;
_08031EB8:
        *v3 = 0;
        goto _08031EBC;
      case 2u:
_08031EBC:
        ++*v2;
        break;
      case 6u:
        v9 = sub_80327CC();
        sub_8094958(v9);
        v4 = 1;
        break;
      default:
        return v4;
    }
  }
  return v4;
}
