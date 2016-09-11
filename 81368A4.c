int sub_81368A4()
{
  unsigned int v0; // r0@1
  int v1; // r1@4
  int v2; // r0@8
  char v3; // r4@8
  int v5; // [sp+8h] [bp-4h]@0

  v0 = *(_BYTE *)(v2039304 + 80);
  if ( v0 <= 6 )
  {
    switch ( v0 )
    {
      case 0u:
        if ( v20087DC != v2039310 )
        {
          sub_80F5060(*(_BYTE *)(v2039304 + 86));
          v1 = v2039304;
          goto _08136986;
        }
        *(_BYTE *)(v2039304 + 80) = 3;
        return v5;
      case 1u:
        if ( !(gpu_sync_bg_show() << 24) )
          goto _08136982;
        return v5;
      case 2u:
        v2 = sub_8055870();
        v3 = v2;
        if ( !v2 )
        {
          sub_80F1934();
          *(_BYTE *)(v2039304 + 80) = v3;
        }
        return v5;
      case 3u:
        BlendPalettes(0xFFFFFFFF, 0x10u, 0);
        goto _08136982;
      case 4u:
        v4000000 = 32576;
        v1 = v2039304;
        goto _08136986;
      case 5u:
        SetVBlankCallback((int)sub_8136264);
        BeginNormalPaletteFade(-1, 0, 0x10u, 0, 0);
_08136982:
        v1 = v2039304;
_08136986:
        ++*(_BYTE *)(v1 + 80);
        break;
      case 6u:
        if ( !(v202F38F & 0x80) )
        {
          sub_80F3C94();
          sub_80F3D00();
          launch_c3_walk_stairs_and_run_once((int)sub_81369CC);
          SetMainCallback2((int)sub_8136244);
        }
        break;
      default:
        return v5;
    }
  }
  return v5;
}
