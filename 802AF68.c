int sub_802AF68()
{
  int v0; // r7@1
  int v1; // r5@2
  int v2; // r6@2
  int v3; // r0@3
  int v4; // r4@5
  signed int v5; // r3@10
  signed int v6; // r2@10
  __int16 *v7; // r1@11
  int v9; // [sp+18h] [bp-4h]@0

  v0 = 0;
  do
  {
    v1 = (unsigned __int16)GetMonData((char *)&unk_3004360 + 100 * v0, 65);
    v2 = (unsigned __int16)GetMonData((char *)&unk_3004360 + 100 * v0, 12);
    if ( GetMonData((char *)&unk_3004360 + 100 * v0, 46) )
      v3 = *((_BYTE *)&gBaseStats + 28 * v1 + 23);
    else
      v3 = *((_BYTE *)&gBaseStats + 28 * v1 + 22);
    v4 = v0 + 1;
    if ( v3 == 53 && v1 && v1 != 412 && !v2 && !((unsigned __int16)Random(412) % 0xAu << 16) )
    {
      v5 = (unsigned __int16)Random(0) % 0x64u & 0xFFFF;
      v6 = 0;
      if ( v5 >= 30 )
      {
        v7 = &word_81FAD60;
        do
        {
          v7 += 2;
          v6 += 2;
        }
        while ( v6 <= 17 && (unsigned __int16)*v7 <= v5 );
      }
      SetMonData((char *)&unk_3004360 + 100 * v0, 12, (char *)&gPickupItems + 2 * v6);
    }
    ++v0;
  }
  while ( v4 <= 5 );
  ++v2024C10;
  return v9;
}
