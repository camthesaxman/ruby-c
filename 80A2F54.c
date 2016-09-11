int AddMapNamePopUpWindowTask()
{
  int *v0; // r1@4
  int v2; // [sp+8h] [bp-4h]@0

  if ( (unsigned __int8)FlagGet(0x4000u) != 1 )
  {
    if ( (unsigned __int8)FuncIsActiveTask((int)sub_80A2FF4) )
    {
      v0 = &dword_3004B20[10 * v2038538];
      if ( *((_WORD *)v0 + 4) != 2 )
        *((_WORD *)v0 + 4) = 2;
      HIWORD(dword_3004B20[10 * v2038538 + 3]) = 1;
    }
    else
    {
      v2038538 = CreateTask((int)sub_80A2FF4, 90);
      v4000012 = 32;
      sub_80A30E0();
      LOWORD(dword_3004B20[10 * v2038538 + 2]) = 0;
      LOWORD(dword_3004B20[10 * v2038538 + 3]) = 32;
    }
  }
  return v2;
}
