signed int __fastcall HealStatusConditions(int a1, int a2, int a3, unsigned __int8 a4)
{
  int v4; // r5@1
  int v5; // r4@1
  int v6; // r6@1
  int v7; // r1@1
  int v8; // r4@2
  signed int result; // r0@5
  int v10; // [sp+0h] [bp-14h]@1

  v4 = a1;
  v5 = a3;
  v6 = a4;
  v7 = GetMonData(a1, 55, 0);
  v10 = v7;
  if ( v7 & v5 )
  {
    v8 = ~v5;
    v10 = v7 & v8;
    SetMonData(v4, 55, (int)&v10);
    if ( byte_3001BAD & 2 )
    {
      if ( v6 != 4 )
        *(_DWORD *)(88 * v6 + 0x2024ACC) &= v8;
    }
    result = 0;
  }
  else
  {
    result = 1;
  }
  return result;
}
