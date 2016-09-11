int __fastcall atkE5_pickupitemcalculation(int a1)
{
  int v1; // r7@1
  signed int v2; // r5@2
  int v3; // r6@3
  char v4; // r0@4
  int v5; // r4@10
  char v7; // [sp+0h] [bp-18h]@4
  int v8; // [sp+14h] [bp-4h]@13

  v1 = a1;
  if ( !((unsigned __int16)Random(a1) % 3u << 16) )
  {
    v2 = 0;
    do
    {
      v3 = 100 * v2;
      if ( GetMonData(v1 + 100 * v2, 11, 0) )
      {
        v4 = GetMonData(v1 + 100 * v2, 34, 0);
        v7 = v4;
        if ( v4 )
        {
          if ( v4 & 0xF )
          {
            if ( v2 && !(GetMonData(v1 + v3 - 100, 34, 0) & 0xF0) )
              SetMonData(v1 + v3 - 100, 34, (int)&v7);
            if ( v2 != 5 )
            {
              v5 = v1 + 100 * v2 + 100;
              if ( !(GetMonData(v5, 34, 0) & 0xF0) )
              {
                SetMonData(v5, 34, (int)&v7);
                ++v2;
              }
            }
          }
        }
      }
      ++v2;
    }
    while ( v2 <= 5 );
  }
  return v8;
}
