int sub_809B7D4()
{
  char v0; // r0@4
  unsigned int v1; // r0@7
  int v3; // [sp+Ch] [bp-4h]@0

  if ( v20384E6 )
  {
    memcpy(33564184, 33564084, 100);
    v2002682 = -1;
    v2002683 = -1;
  }
  else
  {
    if ( v20384E4 == 1 )
    {
      memcpy(33564184, &dword_3004360[25 * v20384E5], 100);
      v0 = 14;
    }
    else
    {
      sub_803B4B4(2400 * v20300A0 + 80 * v20384E5 + 33751204, 33564184);
      v0 = v20300A0;
    }
    v2002682 = v0;
    v2002683 = v20384E5;
  }
  v200267E = 0;
  v200267F = 0;
  v2002686 = 57;
  v2002688 = 291;
  v200268A = 355;
  v1 = GetMonData(33564184, 80, 33564294) << 16;
  v200267E = (v1 >> 16) & 1;
  v200267F = (v1 >> 17) & 1;
  if ( v200267E )
  {
    v200267D = 0;
  }
  else
  {
    v200267D = 1;
    v200267C = 1;
  }
  v2002684 = 0;
  return v3;
}
