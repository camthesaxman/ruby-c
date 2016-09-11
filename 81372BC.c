int sub_81372BC()
{
  char v0; // r4@4
  int v1; // r0@5
  char v2; // r1@7
  int v3; // r0@10
  int v4; // r0@12
  int v5; // r0@14
  int v6; // r0@15
  int v7; // r0@15
  int v9; // [sp+Ch] [bp-4h]@0

  if ( v20160A8 <= 5u )
  {
    switch ( v20160A8 )
    {
      case 0u:
        v20160AA = 64;
        ++v20160A8;
        goto _0813730E;
      case 1u:
_0813730E:
        v0 = --v20160AA;
        if ( v20160AA )
          return v9;
        audio_play(5u);
        v1 = dp01_build_cmdbuf_x21_a_bb(1u, 0, 0);
        dp01_tbl5_exec_completed(v1);
        goto _0813738C;
      case 2u:
        v0 = --v20160AA;
        if ( v20160AA )
          return v9;
        audio_play(5u);
        v2 = 0;
        goto _0813737E;
      case 3u:
        v0 = --v20160AA;
        if ( !v20160AA )
        {
          v2 = 9;
_0813737E:
          v3 = dp01_build_cmdbuf_x21_a_bb(1u, v2, 0);
          dp01_tbl5_exec_completed(v3);
_0813738C:
          ++v20160A8;
          v20160A9 = v0;
          v20160AA = 64;
        }
        break;
      case 4u:
        v4 = v20160AA - 1;
        --v20160AA;
        if ( !(v4 << 24) )
        {
          audio_play(5u);
          nullsub_8();
          sub_802E3E4(1u);
          v20160AA = 64;
          ++v20160A8;
        }
        break;
      case 5u:
        v5 = v20160AA - 1;
        --v20160AA;
        if ( !(v5 << 24) )
        {
          v6 = audio_play(5u);
          sub_814A7FC(v6);
          v7 = dp01_build_cmdbuf_x21_a_bb(1u, 1, 0);
          dp01_tbl5_exec_completed(v7);
        }
        break;
      default:
        return v9;
    }
  }
  return v9;
}
