int __fastcall sub_8075408(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( v202F7A0 )
  {
    --v202F7A0;
  }
  else if ( !sub_81DF594(v202F79C) )
  {
    m4aMPlayVolumeControl(&unk_3007380, 0xFFFF, 256);
    DestroyTask(v1);
  }
  return v3;
}
