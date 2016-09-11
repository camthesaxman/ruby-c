int __fastcall sub_80401D8(unsigned __int16 a1)
{
  unsigned int v1; // r7@1
  signed int v2; // r5@1
  int v3; // r0@3
  char v4; // r0@6
  char v6; // [sp+0h] [bp-18h]@3
  int v7; // [sp+14h] [bp-4h]@10

  v1 = a1;
  v2 = 0;
  do
  {
    if ( GetMonData((int)&unk_3004360 + 100 * v2, 11, 0) )
    {
      v3 = (unsigned __int8)GetMonData((int)&unk_3004360 + 100 * v2, 34, 0);
      v6 = v3;
      if ( v3 & 0xF )
      {
        if ( (v3 & 0xFu) >= v1 && v1 <= 4 )
          v4 = v3 - v1;
        else
          v4 = v3 & 0xF0;
        v6 = v4;
        SetMonData((int)&unk_3004360 + 100 * v2, 34, (int)&v6);
      }
    }
    ++v2;
  }
  while ( v2 <= 5 );
  return v7;
}
