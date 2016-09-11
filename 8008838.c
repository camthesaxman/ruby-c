int ResetSerial()
{
  int v1; // [sp+0h] [bp-4h]@0

  EnableSerial();
  DisableSerial();
  return v1;
}
