int __fastcall sub_802BBD4(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4, char a5)
{
  int v5; // r6@1
  int v6; // r12@1
  int v7; // r5@1
  int v8; // r7@1
  int v9; // r2@1
  int v10; // r1@2
  int v11; // r10@2
  signed __int16 *v12; // r3@3
  signed __int16 v13; // r0@5
  int v15; // [sp+1Ch] [bp-4h]@0

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  v9 = a2;
  if ( a2 <= (signed int)a4 )
  {
    do
    {
      v10 = v5;
      v11 = v9 + 1;
      if ( v5 <= v7 )
      {
        v12 = (signed __int16 *)(2 * v5 + 100712448 + (v9 << 6));
        do
        {
          if ( v9 == v6 )
          {
            v13 = 4130;
          }
          else if ( v9 == v8 )
          {
            v13 = 4136;
          }
          else
          {
            v13 = 4133;
          }
          if ( v10 != v5 )
          {
            ++v13;
            if ( v10 == v7 )
              ++v13;
          }
          if ( a5 )
            v13 = 0;
          *v12 = v13;
          ++v12;
          ++v10;
        }
        while ( v10 <= v7 );
      }
      ++v9;
    }
    while ( v11 <= v8 );
  }
  return v15;
}
