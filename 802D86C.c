int __fastcall c3_0802FDF4(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !(sub_80753C4() << 24) )
  {
    m4aMPlayVolumeControl(&unk_3007380, 0xFFFF, 256);
    DestroyTask(v1);
  }
  return v3;
}
