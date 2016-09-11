signed int __fastcall sub_8045F58(int a1, int a2, int a3, int a4, int a5, unsigned __int16 a6)
{
  int v6; // r8@1
  int v7; // r2@1
  int v8; // r4@5
  int v9; // r6@10
  int v11; // r0@16
  signed int v12; // r0@17
  int v13; // r2@17
  signed int v14; // r0@19
  int v15; // r0@24
  int v16; // r0@26

  v6 = a3;
  v7 = 8 * a5 & 0xFF;
  if ( *(_DWORD *)a4 == -32768 )
  {
    if ( a1 >= v7 )
      *(_DWORD *)a4 = a2;
    else
      *(_DWORD *)a4 = a2 << 8;
  }
  v8 = a2 - v6;
  if ( a2 - v6 >= 0 )
  {
    if ( v8 > a1 )
      v8 = a1;
  }
  else
  {
    v8 = 0;
  }
  if ( a1 >= v7 )
  {
    v9 = *(_DWORD *)a4;
    if ( v8 == *(_DWORD *)a4 )
      return -1;
  }
  else
  {
    v9 = *(_DWORD *)a4;
    if ( v8 == *(_DWORD *)a4 >> 8 && !(_BYTE)v9 )
      return -1;
  }
  if ( a1 >= v7 )
  {
    if ( v6 >= 0 )
    {
      v16 = *(_DWORD *)a4 - a6;
      *(_DWORD *)a4 = v16;
      if ( v16 < v8 )
      {
_0804601A:
        *(_DWORD *)a4 = v8;
        return *(_DWORD *)a4;
      }
    }
    else
    {
      v15 = *(_DWORD *)a4 + a6;
      *(_DWORD *)a4 = v15;
      if ( v15 > v8 )
        goto _0804601A;
    }
    return *(_DWORD *)a4;
  }
  v11 = (a1 << 8) / (8 * a5 & 0xFF);
  if ( v6 >= 0 )
  {
    v14 = v9 - v11;
    *(_DWORD *)a4 = v14;
    v13 = v14 >> 8;
    if ( (signed int)(unsigned __int8)v14 > 0 )
      ++v13;
    if ( v13 > v8 )
      return v13;
    goto _08045FF6;
  }
  v12 = v9 + v11;
  *(_DWORD *)a4 = v12;
  v13 = v12 >> 8;
  if ( v12 >> 8 >= v8 )
  {
_08045FF6:
    *(_DWORD *)a4 = v8 << 8;
    v13 = v8;
  }
  return v13;
}
