int sub_8115124()
{
  int v0; // r0@1
  signed __int16 v1; // r0@10
  __int16 v3; // [sp+0h] [bp-Ch]@12
  int v4; // [sp+8h] [bp-4h]@14

  LoadOam();
  ProcessSpriteCopyRequests();
  v0 = TransferPlttBuffer();
  sub_8117434(v0);
  v4000014 = 512 - v2019026;
  if ( v2019001 )
    v4000052 = v2019034;
  if ( v201902A )
  {
    v40000D4 = &unk_2021B8C;
    v40000D8 = 100671936;
    v40000DC = -2147483232;
    v201902A = 0;
  }
  if ( v2019028 == 1 )
  {
    v4000008 = 7936;
    v40000D4 = &unk_202238C;
    v40000D8 = 100727232;
    v40000DC = -2147483232;
    v1 = 2;
_08115218:
    v2019028 = v1;
    return v4;
  }
  if ( v2019028 > 1 )
  {
    if ( v2019028 != 2 )
    {
      if ( v2019028 != 255 )
        return v4;
      v4000008 = 7944;
      v3 = 0;
      v40000D4 = &v3;
      v40000D8 = 100727232;
      v40000DC = -2130706016;
      v1 = 0;
      goto _08115218;
    }
    v40000D4 = &unk_202238C;
    v40000D8 = 100727232;
    v40000DC = -2147483232;
  }
  return v4;
}
