int remove_some_task()
{
  int v1; // [sp+4h] [bp-4h]@0

  byte_3004DD5 = 0;
  v40000BA &= 0xC5FFu;
  v40000BA &= 0x7FFFu;
  if ( (unsigned __int8)byte_3004DD8 != 255 )
  {
    DestroyTask(byte_3004DD8);
    byte_3004DD8 = -1;
  }
  return v1;
}
