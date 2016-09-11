int __fastcall sub_809E13C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( sub_8055870() != 1 && !(v202F38F & 0x80) )
  {
    v20384F0 = v2018009;
    ResetSpriteData();
    FreeAllSpritePalettes();
    sub_8075398();
    m4aMPlayVolumeControl(&unk_3007380, 0xFFFF, 256);
    SetMainCallback2(v2018004);
    DestroyTask(v1);
  }
  return v3;
}
