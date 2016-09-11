int sub_800B9A8()
{
  int *v0; // r1@3
  int (*v1)(); // r0@3
  char v2; // r0@7
  int v4; // [sp+4h] [bp-4h]@0

  if ( v20239F8 & 1 )
  {
    dword_30042D4 = (int)sub_8010800;
    dword_3004330[0] = (int)sub_802BF74;
    v2024A72 = 0;
    dword_3004334 = (int)sub_8032AE0;
    v2024A73 = 1;
    dword_3004338 = (int)sub_802BF74;
    v2024A74 = 2;
    dword_300433C = (int)sub_8032AE0;
    v2024A75 = 3;
    v2 = 4;
  }
  else
  {
    dword_30042D4 = (int)sub_8010800;
    if ( v20239F8 & 0x80 )
    {
      v0 = dword_3004330;
      v1 = sub_812B468;
    }
    else if ( v20239F8 & 0x200 )
    {
      v0 = dword_3004330;
      v1 = sub_8137224;
    }
    else
    {
      v0 = dword_3004330;
      v1 = sub_802BF74;
    }
    *v0 = (int)v1;
    v2024A72 = 0;
    v0[1] = (int)sub_8032AE0;
    v2024A73 = 1;
    v2 = 2;
  }
  v2024A68 = v2;
  return v4;
}
