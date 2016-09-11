int __fastcall sub_808CC50(unsigned __int8 a1)
{
  unsigned __int8 v1; // r6@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    v2024EBD = *(_WORD *)(v202FFB4 + 1554);
    if ( !sub_806912C() )
      v2024EBD = 0;
    v2024EBC = *(_WORD *)(v202FFB4 + 1558);
    DestroyTask(v1);
    SetMainCallback2((int)sub_805469C);
    m4aMPlayVolumeControl(&unk_3007380, 0xFFFF, 256);
  }
  return v3;
}
