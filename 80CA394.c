int __fastcall sub_80CA394(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    sub_8094E4C();
    gpu_pal_allocator_reset__manage_upper_four();
    DestroyTask(v1);
  }
  return v3;
}
