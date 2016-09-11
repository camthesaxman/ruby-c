int sub_800E9EC()
{
  int v0; // r6@1
  signed int v1; // r9@1
  char v2; // r8@1
  int v3; // r5@2
  int v4; // r7@2
  int v5; // r0@2
  int v7; // [sp+1Ch] [bp-4h]@0

  v0 = 0;
  v1 = 0;
  v2 = 0;
  do
  {
    v3 = (unsigned __int16)GetMonData((char *)&unk_3004360 + 100 * v1, 65);
    v4 = (unsigned __int16)GetMonData((char *)&unk_3004360 + 100 * v1, 57);
    v5 = GetMonData((char *)&unk_3004360 + 100 * v1, 55);
    if ( v3 )
    {
      if ( v3 != 412 && v4 && !v5 )
        v0 = (v0 | (1 << v2)) & 0xFFFF;
      if ( v3 )
      {
        if ( v4 && (v3 == 412 || v5) )
          v0 = (v0 | (2 << v2)) & 0xFFFF;
        if ( v3 && v3 != 412 && !v4 )
          v0 = (v0 | (3 << v2)) & 0xFFFF;
      }
    }
    v2 += 2;
    ++v1;
  }
  while ( v1 <= 5 );
  v2000002 = v0;
  return v7;
}
