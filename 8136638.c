int sub_8136638()
{
  unsigned int v0; // r0@1
  char *v1; // r0@4
  char v2; // r1@4
  int v3; // r0@15
  char v4; // r4@15
  char v5; // r0@20
  int v7; // [sp+4h] [bp-4h]@0

  v0 = *(_BYTE *)(v2039304 + 80);
  if ( v0 <= 7 )
  {
    switch ( v0 )
    {
      case 0u:
        if ( word_300179C & 0x40 )
        {
          audio_play(5u);
          sub_80F5060(1u);
          move_anim_execute();
          v1 = (char *)(v2039304 + 80);
          v2 = 1;
          goto _081367F8;
        }
        if ( word_300179C & 0x80 )
        {
          audio_play(5u);
          sub_80F5060(0);
          move_anim_execute();
          v1 = (char *)(v2039304 + 80);
          v2 = 1;
          goto _081367F8;
        }
        if ( word_300179E & 2 )
        {
          audio_play(5u);
          v1 = (char *)(v2039304 + 80);
          v2 = 3;
          goto _081367F8;
        }
        if ( word_300179E & 1 )
        {
          audio_play(5u);
          if ( v20087DC == v20087DA - 1 )
          {
            v1 = (char *)(v2039304 + 80);
            v2 = 3;
          }
          else
          {
            v1 = (char *)(v2039304 + 80);
            v2 = 5;
          }
          goto _081367F8;
        }
        break;
      case 1u:
        if ( !(gpu_sync_bg_show() << 24) )
          goto _08136784;
        break;
      case 2u:
        v3 = sub_8055870();
        v4 = v3;
        if ( !v3 )
        {
          sub_80F1934();
          sub_80F3D00();
          *(_BYTE *)(v2039304 + 80) = v4;
        }
        break;
      case 3u:
        launch_c3_walk_stairs_and_run_once((int)sub_8136B44);
        break;
      case 5u:
        sub_8136BB8();
_08136784:
        ++*(_BYTE *)(v2039304 + 80);
        break;
      case 6u:
        v5 = sub_8136C40();
        if ( v5 )
        {
          if ( v5 > 0 )
          {
            if ( v5 == 1 )
              goto _081367F0;
          }
          else if ( v5 == -1 )
          {
            goto _081367F0;
          }
        }
        else
        {
          if ( sub_8137058() << 24 )
          {
            sub_8136D60();
            v1 = (char *)(v2039304 + 80);
            v2 = 7;
            goto _081367F8;
          }
          launch_c3_walk_stairs_and_run_once((int)sub_8136808);
        }
        break;
      case 7u:
        if ( word_300179E & 3 )
        {
          sub_8136D8C();
_081367F0:
          v1 = (char *)(v2039304 + 80);
          v2 = 0;
_081367F8:
          *v1 = v2;
        }
        break;
      default:
        return v7;
    }
  }
  return v7;
}
