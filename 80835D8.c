int sub_80835D8()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( (unsigned __int8)FindTaskIdByFunc((int)sub_808353C) == 255 )
    LOWORD(dword_3004B20[10 * (unsigned __int8)CreateTask((int)sub_808353C, 80) + 2]) = 0;
  return v1;
}
