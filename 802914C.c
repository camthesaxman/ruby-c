int __fastcall atkB9_magnitudedamagecalculation(int a1)
{
  signed int v1; // r3@1
  char v2; // r3@2
  int v3; // r2@15
  int v5; // [sp+14h] [bp-4h]@0

  v1 = (unsigned __int16)Random(a1) % 0x64u & 0xFFFF;
  if ( v1 > 4 )
  {
    if ( v1 > 14 )
    {
      if ( v1 > 34 )
      {
        if ( v1 > 64 )
        {
          if ( v1 > 84 )
          {
            if ( v1 > 94 )
            {
              v2024DEC = 150;
              v2 = 10;
            }
            else
            {
              v2024DEC = 110;
              v2 = 9;
            }
          }
          else
          {
            v2024DEC = 90;
            v2 = 8;
          }
        }
        else
        {
          v2024DEC = 70;
          v2 = 7;
        }
      }
      else
      {
        v2024DEC = 50;
        v2 = 6;
      }
    }
    else
    {
      v2024DEC = 30;
      v2 = 5;
    }
  }
  else
  {
    v2024DEC = 10;
    v2 = 4;
  }
  byte_30041C0[0] = -3;
  byte_30041C1 = 1;
  word_30041C2 = 513;
  byte_30041C4 = v2;
  byte_30041C5 = -1;
  v2024C08 = 0;
  if ( v2024A68 > 0u )
  {
    do
    {
      v3 = v2024C08;
      if ( v2024C08 != v2024C07 && !(v2024C0C & gBitTable[v2024C08]) )
        break;
      ++v2024C08;
    }
    while ( ((v3 + 1) & 0xFFu) < v2024A68 );
  }
  ++v2024C10;
  return v5;
}
