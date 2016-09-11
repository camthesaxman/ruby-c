int sub_81369CC()
{
  unsigned int v0; // r0@1
  int v1; // r3@3
  int v2; // r0@6
  int v3; // r1@6
  unsigned __int8 v4; // r0@8
  int v5; // r1@8
  int v6; // r2@8
  unsigned __int8 v7; // r0@9
  int v9; // [sp+Ch] [bp-4h]@0

  v0 = *(_BYTE *)(v2039304 + 80);
  if ( v0 <= 5 )
  {
    switch ( v0 )
    {
      case 0u:
        v1 = v2039304;
        *(_DWORD *)(v2039304 + 12) = dword_3004360;
        *(_DWORD *)(v1 + 12) = &dword_3004360[25 * (*(_BYTE *)(4 * v20087DC + 0x200893E) & 0x1F)];
        move_anim_execute();
        goto _08136B02;
      case 1u:
        if ( word_300179E & 3 )
          goto _08136B02;
        return v9;
      case 2u:
        sub_8136EF0();
        sub_80F567C((_BYTE *)(v2039304 + 92), 33591360);
        v2 = sub_80F5550(20 * v2008FE9 + 33591300, 33591360);
        sub_8137138(v2);
        v3 = v2039304;
        goto _08136B04;
      case 3u:
        if ( (unsigned __int8)sub_80F555C() )
          return v9;
        v4 = sub_81370A4(v20087DC);
        sub_80F7224(v4, v5, v6);
        sub_80F3D00();
        *(_BYTE *)(v2039304 + 82) = 0;
        v3 = v2039304;
        goto _08136B04;
      case 4u:
        v7 = *(_BYTE *)(v2039304 + 82) + 1;
        *(_BYTE *)(v2039304 + 82) = v7;
        if ( v7 > 0x10u )
        {
          sub_8136C6C();
_08136B02:
          v3 = v2039304;
_08136B04:
          ++*(_BYTE *)(v3 + 80);
        }
        break;
      case 5u:
        if ( word_300179E & 3 && !(sub_8136D00() << 24) )
        {
          sub_810CA6C(v203855E);
          launch_c3_walk_stairs_and_run_once((int)sub_8136B44);
        }
        break;
      default:
        return v9;
    }
  }
  return v9;
}
