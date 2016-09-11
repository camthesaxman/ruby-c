int __fastcall sub_80C5C38(unsigned __int8 a1, unsigned __int8 a2)
{
  unsigned int v2; // r6@1
  unsigned int v3; // r5@1
  signed int v4; // r7@1
  int v5; // r2@1
  signed int v6; // r5@3
  int v8; // [sp+0h] [bp-24h]@1
  char v9; // [sp+8h] [bp-1Ch]@1
  int v10; // [sp+20h] [bp-4h]@10

  v2 = a1;
  v3 = a2;
  v4 = 0;
  v9 = 1;
  memcpy(&v8, "HIJKLMN", 7);
  if ( v2 <= 0xA && v3 <= 0x40 )
  {
    *(_BYTE *)(v2 + 33720388) = v3;
    v6 = 0;
    do
    {
      if ( GetMonData((int)&dword_3004360[25 * v6], 11, v5) && !GetMonData((int)&dword_3004360[25 * v6], 6, v5) )
      {
        SetMonData((int)&dword_3004360[25 * v6], *((_BYTE *)&v8 + v2), (int)&v9);
        v4 = 1;
      }
      ++v6;
    }
    while ( v6 <= 5 );
    if ( v4 )
      FlagSet(0x83Bu);
  }
  return v10;
}
