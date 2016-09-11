int __fastcall sub_80BE97C(int a1)
{
  __int16 v1; // r0@5
  int v3; // [sp+4h] [bp-4h]@0

  if ( a1 << 24 )
  {
    if ( (unsigned int)v20387E2 >> 8 > 4 )
      sub_80BE9D4();
    v20387E2 = v20387E2;
    if ( v20387E2 != 255 )
    {
      v1 = v20387E2 + 1;
_080BE9C6:
      v20387E2 = v1;
      return v3;
    }
  }
  else
  {
    if ( v20387E2 > 4u )
      sub_80BE9D4();
    v20387E2 &= 0xFF00u;
    if ( (unsigned int)v20387E2 >> 8 != 255 )
    {
      v1 = v20387E2 + 256;
      goto _080BE9C6;
    }
  }
  return v3;
}
