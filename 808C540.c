int __fastcall unref_sub_808C540(int a1)
{
  int v1; // r5@1
  int (*v2)(); // r0@2
  int v3; // r4@4
  int result; // r0@4

  v1 = a1;
  SetVBlankCallback(0);
  sub_8091060(512);
  remove_some_task();
  ResetTasks();
  ResetPaletteFade();
  v4000200 |= 1u;
  v4000004 |= 8u;
  SetVBlankCallback((int)sub_808C0B8);
  SetMainCallback2((int)sub_808C5F0);
  if ( *(_BYTE *)(v202FFB4 + 1611) )
    v2 = sub_808D198;
  else
    v2 = sub_808CAE4;
  v3 = (unsigned __int8)CreateTask((int)v2, 0);
  result = (unsigned __int8)CreateTask(v1, 0);
  LOWORD(dword_3004B20[10 * v3 + 2]) = result;
  return result;
}
